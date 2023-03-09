#include <string>
#include "../encryption/encryption.cpp"
#include "../node/node.cpp"
#include "../wallet/wallet.cpp"

namespace messaging {
    
    struct Message {
        
        string publicKey,
               message;
        
    }
    
    unsigned int signMessage(wallet.privateKey PRIVATEKEY, wallet.publicKey PUBLICKEY, string MESSAGE) {
        
        string signedMessage = new Message(PUBLICKEY, wallet.sign(message, PRIVATEKEY));
        
        return signedMessage;
        
    };
    unsigned int sendMessageToBlockchainNode(Message MESSAGE, string address, unsigned int port) {
        
        bool response = node.sendDatasTo(address, port, MESSAGE);
        
        if (response == false) {
            
            std::cout << "Error while sending the message to the node " << address << ":" << port << " !" << std::endl;
            
        } else {
            
            std::cout << "The message has been sent !" << std::endl; 
            
        };
        
    };
    
}
