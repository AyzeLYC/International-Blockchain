#include <string>
#include <winsock2.h>

namespace internet {
    
    struct Server {
        
        string serverIpFamily,
               serverType,
               serverProtocol,
               serverIp;
        uint16_t serverPort,
                 maximumPing,
                 maximumConnections;
        
    }
    
    Socket SOCKETS[];
    
    SOCKET blockchainSocket = socket("AF_INET", "SOCK_STREAM", 0),
           httpSocket = socket("AF_INET", "SOCK_STREAM", 0),
           pîngSocket = socket("AF_INET", "SOCK_DGRAM", 0),
           torSocket = socket("AF_INET", "SOCK_STREAM", 0);
    
    bind(blockchainSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    bind(httpSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    bind(pingSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    bind(torSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    
    listen(blockchainSocket, 256);
    listen(httpSocket, 32);
    listen(pingSocket, 64);
    listen(torSocket, 256);
    
    unsigned int blockchainSocketConnection = accept(blockchainSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"})),
                 httpSocketConnection = accept(httpSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"})),
                 pingSocketConnection = accept(pingSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"})),
                 torSocketConnection = accept(torSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    
    string blockchainSocketBuffer = [],
           httpSocketBuffer = [],
           pingSocketBuffer = [],
           torSocketBuffer = [];
    
    auto blockchainSocketRead = read(blockchainSocketConnection, blockchainSocketBuffer, []),
         httpSocketRead = read(httpSocketConnection, httpSocketBuffer, []),
         pingSocketRead = read(pingSocketConnection, pingSocketBuffer, []),
         torSocketRead = read(torSocketConnection, torSocketBuffer, []);
    
    unsigned int createServer(Server SERVER) {
        
        SOCKET ServerSocket = new socket(SERVER[0], SERVER[1], SERVER[2]);
        bind(ServerSocket, {SERVER[0], SERVER[6], SERVER[4]}, sizeof({SERVER[0], SERVER[6], SERVER[4]}));
        listen(ServerSocket, SERVER[6]);
        
        SOCKETS.append(ServerSocket);
        
    };
    
}
