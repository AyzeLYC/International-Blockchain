#include <string>
#include "../derivation/derivation.cpp"
#include "../encryption/encryption.cpp"
#include "../node/node.cpp"
#include "../wallet/wallet.cpp"

namespace messaging {
    
    struct Message {
        
        string senderPublicKey,
               messageSignature,
               message;
        
    }
    
    unsigned int signMessage(wallet.privateKey PRIVATEKEY, wallet.publicKey PUBLICKEY, string MESSAGE) {
        
        string encryptedMessage;
        
        encryptedMessage = Message(PUBLICKEY, wallet.sign(message, PRIVATEKEY));
        return encryptedMessage;
        
    };
    unsigned int verifyMessage(Message MESSAGE) {
        
        bool messageValid;
        
        if (wallet.verify(message[64 : 127], message[0 : 31])) {
            
            messageValid = true;
            
        } else {
            
            messageValid = false;
            
        };
        return messageValid;
        
    };
    unsigned int sendMessageToBlockchainNode(Message MESSAGE, string address, unsigned int port) {
        
        string response;
        bool responseValid;
        
        response = node.sendDatasTo(address, port, MESSAGE);
        
        if (response < 0 || response[0 : 4] == "error") {
            
            std::cout << "Error while sending the message to the node " << address << ":" << port << " !" << std::endl;
            responseValid = false;
            
        } else {
            
            std::cout << "The message has been sent !" << std::endl;
            responseValid = true;
            
        };
        return responseValid;
        
    };
    unsigned int sendMessageToBlockchainNodes(Message MESSAGE) {
        
        string responses[];
        bool responsesValid[];
        
        responses = node.sendDatas(MESSAGE);
        
        for (unsigned short int i; i < responses.length(); i++) {
            
            if (responses[i] < 0 || responses[i] == "error") {
                
                
                
            } else {
                
                
                
            };
            
        }
        
    };
    
}
