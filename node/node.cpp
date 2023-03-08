#include <std>
#include <string>

#include "../internet/internet.cpp"

namespace node {
    
    unsigned int sendDatas(string datas) {
        
        string receiversResponses = [];
        uint32_t transmissionErrors = 0;
        
        internet.blockchainSocket.send(datas);
        receiversResponses = internet.blockchainSocket.recv();
        
        for (uint32_t i; i < receiversResponses.length; i++) {
            
            if (receiversResponses[i] <= 0 || receiversResponses[i[0 : 4]] == "error") {
                
                transmissionErrors += 1;
                std::cout << "Error when transmitting some datas to one of the nodes connected !" << std::endl;
                
            };
            
        };
        
    };
    unsigned int sendDatasTo(string toAddress, uint toPort, string datas) {
        
        string receiverResponse;
        unsigned long long transmissionErrors = 0;
        
        connect(internet.blockchainSocket, [toAddress, toPort], sizeof([toAddresss, toPort]));
        internet.blockchainSocket.send(datas);
        receiverResponse = internet.blockchainSocket.recv();
        
        if (receiverResponse <= 0 || receiverResponse[0 : 4] == "error") {
            
            transmissionErrors += 1;
            std::cout << "Error when transmitting some datas to the node " << toAddress << " : " << toPort << " !" << std::endl;
            
        };
        
    };
    unsigned int receiveDatas() {
        
        string sendersDatas = [];
        uint32_t transmissionErrors = 0;
        
        
        
    };
    unsigned int receiveDatasFrom(string fromAddress, string fromPort) {
        
        string senderDatas;
        unsigned long long transmissionErrors = 0;
        
    };
    
}
