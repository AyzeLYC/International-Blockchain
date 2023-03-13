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
    
    struct privateKey {
        
        uint256_t key;
        
    }
    struct compressedPublicKey {
        
        uint264_t key;
        
    }
    struct publicKey {
        
        uint512_t key;
        
    }
    struct wallet {
        
        
        
    }
    
    struct block {
        
        uint32_t version;
        uint256_t previousBlockHash,
                  merkleRootHash;
        uint32_t time,
                 bits,
                 nonce;
        string transactionsNumber,
               transactions;
        
    }
    struct transaction {
        
        uint32_t version;
        string flag,
               inCount,
               in,
               outCount,
               out,
               witnesses;
        uint32_t lock_time;
        
    }
    
    struct message {
        
        uint32_t magic;
        uint96_t command;
        uint32_t length,
                 checksum;
        string payload;
        
    }
    
    struct ipaddress {
        
        uint32_t time;
        uint64_t services;
        uint128_t ip;
        uint16_t port;
        
    }
    
    struct inventoryVectors {
        
        uint32_t type;
        uint256_t hash;
        
    }
    
    
    string blocksLedger = [],
           hashsLedger = [],
           privateKeys = {}, // format : "privatekey": [{"pubkey": "public key 1", "derivation": "derivation datas"}, {"pubkey": "public key 2", "derivation": "derivation datas"} ... ]
           transactionsPool = [];
    
    unsigned int generatePrivateKey() {
        
        
        
    };
    unsigned int generatePublicKey() {
        
        
        
    };
    unsigned int createWalletFile(string name, bool load_on_start, string options, ) {
        
        
        
    };
    unsigned int lockWalletFile() {
        
        
        
    };
    unsigned int unlockWalletFile() {
        
        
        
    };
    
    unsigned int createTransaction(uint32_t version, string flag, string inCount, string in, string outCount, string out, string witnesses, uint32_t lockTime) {
        
        transaction TRANSACTION = transaction(version, flag, inCount, in, outCount, out, witnesses, lockTime);
        return TRANSACTION;
        
    };
    unsigned int signTransaction() {
        
        
        
    };
    unsigned int verifyTransaction(transaction TRANSACTION) {
        
        if () {
            
            
            
        };
        
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
