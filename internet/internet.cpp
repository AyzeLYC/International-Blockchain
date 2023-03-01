#include <string>
#include <winsock2.h>

namespace internet {
    
    SOCKET blockchainSocket = socket(AF_INET, SOCK_STREAM, 0),
           httpSocket = socket(AF_INET, SOCK_STREAM, 0),
           torSocket = socket(AF_INET, SOCK_STREAM, 0),
           pîngSocket = socket(AF_INET, SOCK_DGRAM, 0);
    
    bind(blockchainSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    bind(httpSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    bind(torSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    bind(pingSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    
    listen(blockchainSocket, 256);
    listen(httpSocket, 32);
    listen(torSocket, 256);
    listen(pingSocket, 64);
    
    unsigned int blockchainSocketConnection = accept(blockchainSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"})),
                 httpSocketConnection = accept(httpSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"})),
                 torSocketConnection = accept(torSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"})),
                 pingSocketConnection = accept(pingSocket, {"AF_INET", 10000, "127.0.0.1"}, sizeof({"AF_INET", 10000, "127.0.0.1"}));
    
    string blockchainSocketBuffer = [],
           httpSocketBuffer = [],
           torSocketBuffer = [],
           pingSocketBuffer = [];
    
    auto blockchainSocketRead = read(blockchainSocketConnection, blockchainSocketBuffer, []),
         httpSocketRead = read(httpSocketConnection, httpSocketBuffer, []),
         torSocketRead = read(torSocketConnection, torSocketBuffer, []),
         pingSocketRead = read(pingSocketConnection, pingSocketBuffer, []);
    
    unsigned int createUdpServer(string address, unsigned int port) {
        
        
        
    };
    unsigned int createTcpServer(int domain, int type, string address, unsigned int port) {
        
        
        
    };
    
};
