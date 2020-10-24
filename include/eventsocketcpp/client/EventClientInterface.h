// A client interface that handles one connection

#pragma once

#include <eventsocketcpp/RedBackCommon.h>
#include <eventsocketcpp/RedBackConnection.h>
#include <eventsocketcpp/RedBackMessage.h>
#include <eventsocketcpp/RedBackTSQueue.h>



namespace RedBack
{
    namespace Client
    {
        template<typename T>
        class EventClientInterface
        {
        public:

            explicit EventClientInterface()
            {}

            virtual ~EventClientInterface()
            {
                disconnect();
            }

            // Connect to a server given the host and port
            // Returns true if the operation is successful
            bool connect(std::string host, uint16_t port)
            {
                try 
                {

                    // Resolves the host to an endpoint
                    boost::asio::ip::tcp::resolver resolver{asioContext};

                    // Resolve and connect
                    resolver.async_resolve(host, std::to_string(port),
                    [this](boost::system::error_code ec, boost::asio::ip::tcp::resolver::results_type endpoints){

                        // Create the connection
                        connection = std::make_shared<Connection<T>>(Connection<T>::owner::client, asioContext, qMessagesIn);

                        // Connect to the endpoint
                        connection->connectToServer(endpoints, [this](){ OnConnect(); });

                    });

                    // Start the asynchrononous context
                    threadContext = std::thread([this]{ asioContext.run(); });
                    return true;

                }
                catch(std::exception& e)
                {
                    std::cerr<< "[CLIENT] Exception: " << e.what() << std::endl;
                    return false;
                }
            }

            // Process the received messages
            void update(size_t nMaxMessages = -1, bool bWait = false)
            {
                // Wait until we receive messages
                if (bWait) qMessagesIn.wait();

                // Start reading messages
                for(size_t nMessages = 0; nMessages < nMaxMessages; nMessages++)
                {
                    OwnedMessage<T> msg = qMessagesIn.front();

                    // Parse the message for specific configurations 
                    // such as a response to create room, forwarded message
                    // It also calls the OnMessage callback after configuration
                    parseConfigs(msg);

                    //Pop the message out
                    qMessagesIn.pop_front();
                }
            }

            bool isConnected()
            {
                if (connection)
                {
                    return connection->isConnected();
                }else
                {
                    return false;
                }
                
            }

            void disconnect()
            {
                if (isConnected())
                {
                    connection->disconnect();
                }

                // Stop the context and its thread
                asioContext.stop();
                
                if (threadContext.joinable())
                    threadContext.join();

                connection.reset();
            }

            void send(const Message<T>& msg)
            {
                if (isConnected())
                    connection->send(msg);
            }

            TSQueue<T> incomingMsgs()
            {
                return qMessagesIn;
            }

        protected:
            // A callback to received messages
            void OnMessage(Message<T> msg, std::unique_ptr<MetaConfig> config = nullptr)
            {
                if (config != nullptr)
                {
                    if (config->roomID > 0)
                    {
                        OnRoomCreated(msg, config->roomID);
                    }
                    else if (config->broadcasterID > 0)
                    {
                        OnBroadCast(msg, config->broadcasterID);
                    }
                    else
                    {
                        OnForward(msg, config->forwarderID);
                    } 
 
                }
                else
                {
                    // Check if there are custom callbacks assigned 
                    if (callbacks.count(msg.header.id) != 0)
                    {
                        callbacks.at(msg.header.id)(msg);
                    }

                }
            }

            // Assign a callback to be invoked when a particular event t happens
            void OnEvent(T t, std::function<void(Message<T> msg)> callback)
            {
                callbacks.insert({t, callback});
            }

            // Override: when the connection is disconnected
            virtual void OnDisconnect()
            {

            }

            // Override: when connected
            virtual void OnConnect()
            {

            }


            // Override: when a client forwards a message to you 
            virtual void OnForward(Message<T> msg, uint32_t forwarderID)
            {

            }

            // Override: when a client broadcasts a message
            virtual void OnBroadCast(Message<T> msg, uint32_t broadcasterID)
            {

            }

            // Override: when a room is created
            virtual void OnRoomCreated(Message<T> msg, uint32_t roomID)
            {

            }

            // Parse the different configurations of the message
            bool parseConfigs(Message<T> msg)
            {
                switch(msg.header.config)
                {
                    case Config::Broadcasted:
                    {
                        // forwarder id
                        uint32_t bID;
                        msg >> bID;
                        auto mc = std::make_unique<MetaConfig>();
                        mc->broadcasterID = bID;
                        OnMessage(msg, std::move(mc));
                        break;
                    }

                    case Config::CreateRoomResponse:
                    {
                        // the room id
                        uint32_t roomID;
                        msg >> roomID;
                        auto mc = std::make_unique<MetaConfig>();
                        mc->roomID = roomID;
                        OnMessage(msg, std::move(mc));
                        break;
                    }

                    case Config::Forwarded:
                    {
                        
                        // forwarder id
                        uint32_t fID;
                        msg >> fID;
                        auto mc = std::make_unique<MetaConfig>();
                        mc->forwarderID = fID;
                        OnMessage(msg, std::move(mc));
                        break;
                    }
                    default:
                        OnMessage(msg);
                }

            }


            // The context that handles all asynchronous operations
            boost::asio::io_context asioContext;
            
            // The thread that handles running the context
            std::thread threadContext;

            // The current connection object
            std::shared_ptr<Connection<T>> connection;

            private:
                // Contains all incoming messages
                TSQueue<OwnedMessage<T>> qMessagesIn;

                // The map that contains all event callbacks 
                std::map<T, std::function<void(Message<T>)>> callbacks;
        };
    } // Client
} //RedBack