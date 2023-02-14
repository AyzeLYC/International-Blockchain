#include "../derivation/derivation.cpp"

namespace wallet {
    
    struct Wallet {
        
        string name,
               privateKeys[],
               message;
        
    };
    
    unsigned int createWallet(string name, string privateKeys[], string message) {
        
        
        
    };
    unsigned int unlockWallet(Wallet WALLET, string password) {
        
        
        
    };
    unsigned int lockWallet(Wallet WALLET, string password) {
        
        
        
    };
    
    unsigned int createPrivateKey() {
        
        
        
    };
    unsigned int generatePublicKey(PrivateKey PRIVATEKEY) {
        
        string publicKey = derivation.secp256k1(PRIVATEKEY);
        
        return publicKey
        
    };
    
}
