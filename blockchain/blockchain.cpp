#include <fs>
#include <iostream>
#include <string>

#include "../derivation/derivation.cpp"
#include "../hashing/hashing.cpp"
#include "../node/node.cpp"
#include "../transaction/transaction.cpp"
#include "../wallet/wallet.cpp"

namespace blockchain {
    
    struct Block {
        
        uint256_t blockCreatorAddress;
        string blockId,
               blockHexUnixDate,
        uint142606336_t blockTransactions; // 16384 transactions per block with a maximum size of 1088 bytes ( 8704 bits ) per transaction
        uint8192_t blockMessage;
        
    };
    
    string firstBlockHash = "",
           ledger = {};
    
    unsigned int createBlock(Block.blockCreatorAddress creatorAddress, Block.blockMessage message) {
        
        string transactions = [];
        
        if (transaction.ledger.length > 16384) {
            
            for (unsigned long long i; i < 16384; i++) {
                
                transactions.append(transaction.ledger[i - 1]);
                
            };
            transaction.ledger[0 : 16383].delete();
            
            Block BLOCK = Block(creatorAddress, ledger.length, Date.now(), transactions, message);
            
        } else {
            
            Block BLOCK = Block(creatorAddress, ledger.length, Date.now(), transaction.ledger, message);
            
        };
        
    };
    unsigned int getBlock(string blockId) {
        
        
        
    };
    unsigned int signBlock(Block BLOCK, wallet.privateKey PRIVATEKEY) {
        
        
        
    };
    unsigned int verifyBlock(Block BLOCK, transaction.signature SIGNATURE) {
        
        if (BLOCK.size <= 17826848 && transaction.verifySignature(SIGNATURE, BLOCK[0 : 31]) == 1) {
            
            return 1;
            
        } else {
            
            return 0;
            
        };
        
    };
    unsigned int confirmBlock(Block BLOCK, wallet.privateKey PRIVATEKEY) {
        
        
        
    };
    unsigned int relayBlock(Block BLOCK, transaction.signature) { // relaying a specific block to 
        
        
        
    };
    
}

namespace Bitcoin {
    
    string blocksLedger = [],
           hashsLedger = [],
           privateKeys = {}, // format : "privatekey": [{"pubkey": "public key 1", "derivation": "derivation datas"}, {"pubkey": "public key 2", "derivation": "derivation datas"} ... ]
           transactionsPool = [];
    
    unsigned int generatePrivateKey() {
        
        
        
    };
    unsigned int generatePublicKey() {
        
        
        
    };
    unsigned int createWalletFile() {
        
        
        
    };
    unsigned int lockWalletFile() {
        
        
        
    };
    unsigned int unlockWalletFile() {
        
        
        
    };
    
    unsigned int createTransaction() {
        
        
        
    };
    unsigned int signTransaction() {
        
        
        
    };
    unsigned int verifyTransaction() {
        
        
        
    };
    
    unsigned int createBlock() {
        
        
        
    };
    unsigned int mineBlock() {
        
        
        
    };
    unsigned int verifyBlock(string blockData, string hash) {
        
        if (hash.length() == 32 && hashing.sha256d(blockData).toString() == hash && blockData[4 : 35] == hashing.sha256d(blocksLedger[blocksLedger.length - 1])) {
            
            blocksLedger.append(blockData);
            hashsLedger.append(hash);
            return true;
            
        } else {
            
            return false;
            
        };
        
    };
    
    unsigned int relay(string datas) {
        
        
        
    };
    
}
