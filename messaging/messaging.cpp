#include <string>
#include "../encryption/encryption.cpp"
#include "wallet/wallet.cpp"

namespace messaging {
    
    struct Message {
        
        string message,
               publicKey,
               signature;
        
    }
    
    unsigned int createMessage(string message, wallet.privateKey)
    unsigned int sendMessage(Message MESSAGE, uint8_t address[4], unsigned int port) {
        
        
        
    };
    
}
