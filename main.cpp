#include <fstream>
#include <std>
#include <string>

#include "blockchain/blockchain.cpp"
#include "cli/cli.cpp"
#include "derivation/derivation.cpp"
#include "encryption/encryption.cpp"
#include "hashing/hashing.cpp"
#include "internet/internet.cpp"
#include "messaging/messaging.cpp"
#include "node/node.cpp"
#include "smart-contract/smart-contract.cpp"
#include "transaction/transaction.cpp"
#include "ui/ui.cpp"
#include "wallet/wallet.cpp"

namespace main {
    
    unsigned int start() {
        
        ui.start();
        wallet.start();
        blockchain.start();
        
    };
    unsigned int pause() {
        
        messaging.pause();
        internet.pause();
        smartcontract.pause();
        transaction.pause();
        
    };
    unsigned int stop() {
        
        messaging.stop();
        internet.stop();
        smartcontract.stop();
        transaction.stop();
        
    };
    
}
