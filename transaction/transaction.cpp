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
        
        return TRANSACTION
        
    };
    unsigned int getTransaction(string transactionId) {
        
        node.sendDatas("get transaction " + transactionId);
        string transaction = node.receiveDatas();
        
    };
    unsigned int verifyTransaction(wallet.signature SIGNATURE, wallet.publicKey PUBLICKEY) {
        
        
        
    };
    unsigned int signTransaction(Transaction TRANSACTION, wallet.privateKey PRIVATEKEY) {
        
        
        
    };
    unsigned int relayTransaction(Transaction TRANSACTION, wallet.signature SIGNATURE) {
        
        node.sendDatas("send transaction " + SIGNATURE + " " + TRANSACTION)
        
    };
    
}
