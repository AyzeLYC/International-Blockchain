#include <fstream>
#include <string>
#include "../derivation/derivation.cpp"
#include "../encryption/encryption.cpp"
#include "../hashing/hashing.cpp"

namespace wallet {
    
    uint256_t privateKey,
              privateKeys[];
    
    struct Wallet {
        
        string name,
               privateKeys[],
               message;
        
    };
    
    unsigned int createWallet(string name, string privateKeys[], string message) {
        
        Wallet WALLET = Wallet(name, privateKeys, message);
        
        return WALLET;
        
    };
    unsigned int lockWallet(Wallet WALLET, string password) {
        
        string encryptedWalletDatas,
               hashedPassword;
        
        hashedPassword = hashing.sha512q(password);
        encryptedWalletDatas = encryption.AES256CBC.encrypt(WALLET, hashedPassword);
        
        return encryptedWalletDatas;
        
    };
    unsigned int unlockWallet(Wallet WALLET, string password) {
        
        string unencryptedWalletDatas,
               hashedPassword;
        
        hashedPassword = hashing.sha512q(password);
        unencryptedWalletDatas = encryption.AES256CBC.decrypt(WALLET, hashedPassword);
        
        return unencryptedWalletDatas;
        
    };
    
    unsigned int createPrivateKey() {
        
        
        
    };
    unsigned int generatePublicKey(PrivateKey PRIVATEKEY) {
        
        string publicKey = derivation.secp256k1(PRIVATEKEY);
        
        return publicKey;
        
    };
    
}
