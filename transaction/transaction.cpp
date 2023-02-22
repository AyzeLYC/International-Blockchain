#include "../derivation/derivation.cpp"
#include "../hashing/hashing.cpp"
#include "../wallet/wallet.cpp"

namespace transaction {
    
    struct Transaction {
        
        wallet.publicKey from;
        wallet.publicKey to;
        string transactionMessage;
        
    };
    
    unsigned int createTransaction(wallet.publicKey from, wallet.publicKey to, string message) {
        
        string TRANSACTION = Transaction(from, to, message);
        
        return TRANSACTION;
        
    };
    unsigned int getTransaction(string transactionId) {
        
        node.sendDatas("get transaction " + transactionId);
        string transaction = node.receiveDatas();
        
        return transaction;
        
    };
    unsigned int verifyTransaction(wallet.signature SIGNATURE, wallet.publicKey PUBLICKEY, Transaction TRANSACTION) {
        
        if (TRANSACTION.length <= 1088 && TRANSACTION[0 : 31] != <uint256_t> 0 && TRANSACTION[32 : 63]) {
            
            
            
        };
        
    };
    unsigned int signTransaction(Transaction TRANSACTION, wallet.privateKey PRIVATEKEY) {
        
        
        
    };
    unsigned int relayTransaction(Transaction TRANSACTION, wallet.signature SIGNATURE) {
        
        node.sendDatas("send transaction " + SIGNATURE + " " + TRANSACTION);
        
        return 
        
    };
    
}
