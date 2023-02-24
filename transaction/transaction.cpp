#include <string>

#include "../blockchain/blockchain.cpp"
#include "../derivation/derivation.cpp"
#include "../hashing/hashing.cpp"
#include "../wallet/wallet.cpp"

namespace transaction {
    
    uint256_t signature;
    
    struct Transaction {
        
        wallet.publicKey from,
                         to;
        uint8192_t transactionId,
                   transactionDate,
                   transactionMessage;
        
    };
    
    unsigned int createTransaction(Transaction.from from, Transaction.to to, Transaction.transactionId id, Transaction.transactionDate date, Transaction.transactionMessage message) {
        
        string TRANSACTION = Transaction(from, to, id, date, message);
        
        return TRANSACTION;
        
    };
    unsigned int getTransaction(string transactionId) {
        
        node.sendDatas("get transaction " + transactionId);
        string transaction = node.receiveDatas();
        
        return transaction;
        
    };
    unsigned int verifyTransaction(wallet.signature SIGNATURE, Transaction TRANSACTION) {
        
        if (TRANSACTION.length <= 1088 && TRANSACTION[0 : 31] != <uint256_t> 0 && TRANSACTION[32 : 63] != <uint256_t> 0 &&  TRANSACTION[1088 : TRANSACTION.length - 1] == blockchain.ledger[TRANSACTION[0 : 31]["txs"]] && derivation.secp256k1(SIGNATURE) == derivation.secp256k1(TRANSACTION, TRANSACTION[0 : 31])) {
            
            unsigned short result = 1;
            
        } else {
            
            unsigned short result = 0;
            
        };
        
        return result;
        
    };
    unsigned int signTransaction(Transaction TRANSACTION, wallet.privateKey PRIVATEKEY) {
        
        
        
    };
    unsigned int relayTransaction(Transaction TRANSACTION, wallet.signature SIGNATURE) {
        
        node.sendDatas("send transaction " + SIGNATURE + " " + TRANSACTION);
        string response = node.receiveDatas();
        
        return response;
        
    };
    
}
