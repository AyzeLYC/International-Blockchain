#include <fs>
#include <iostream>
#include <string>

#include "../wallet/wallet.cpp"
#include "../transaction/transaction.cpp"

namespace blockchain {
    
    struct Block {
        
        string blockId,
               blockHexUnixDate,
               blockTransactions;
        
    };
    
    string firstBlockHash = "",
           lastBlockContent = "",
           lastBlockHexUnixDate,
           lastBlockSha512Hash = "",
           ledger = {};
    
    unsigned int createBlock() {
        
        
        
    };
    unsigned int getBlock(string blockId) {
        
        
        
    };
    unsigned int signBlock(Block BLOCK, wallet.privateKey PRIVATEKEY) {
        
        
        
    };
    unsigned int verifyBlock(Block BLOCK) {
        
        
        
    };
    unsigned int confirmBlock(Block BLOCK) {
        
        
        
    };
    unsigned int relayBlock(Block BLOCK, transaction.signature) { // relaying a specific block to 
        
        
        
    };
    
}
