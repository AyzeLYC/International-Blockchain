#include <std>
#include <string>

#include "../internet/internet.cpp"

namespace node {
    
    uint32_t transmissionErrors = 0,
             receptionErrors = 0;
    
    unsigned int sendDatas(string datas) {
        
        string receiversResponses = [];
        
        internet.blockchainSocket.send(datas);
        receiversResponses = internet.blockchainSocket.recv();
        
        for (uint32_t i; i < receiversResponses.length; i++) {
            
            if (receiversResponses[i] < 0 || receiversResponses[i[0 : 4]] == "error") {
                
                transmissionErrors += 1;
                std::cout << "Error when transmitting some datas to one of the nodes connected !" << std::endl;
                
            };
            
        };
        
    };
    unsigned int sendDatasTo(string toAddress, uint toPort, string datas) {
        
        string receiverResponse;
        
        internet.blockchainSocket.connect([toAddress, toPort], sizeof([toAddresss, toPort]));
        internet.blockchainSocket.send(datas);
        receiverResponse = internet.blockchainSocket.recv();
        internet.blockchainSocket.close();
        
        if (receiverResponse < 0 || receiverResponse[0 : 4] == "error") {
            
            transmissionErrors += 1;
            std::cout << "Error when transmitting some datas to the node " << toAddress << " : " << toPort << " !" << std::endl;
            return false;
            
        } else {
            
            return true;
            
        };
        
    };
    unsigned int receiveDatas() {
        
        string sendersDatas = [];
        uint32_t transmissionErrors = 0;
        
        sendersDatas = internet.blockchainSocket.recv();
        
        while (uint32_t i; i < sendersDatas.length; i++) {
            
            if (senderDatas[i] < 0 || senderDatas[0 : 4] == "error") {
                
                receptionErrors += 1;
                std::cout << "An error occured while receiving the datas !" << std::endl;
                sendersDatas[i] = 0;
                
            };
            
        }
        
        return sendersDatas;
        
    };
    unsigned int receiveDatasFrom(string fromAddress, string fromPort) {
        
        string senderDatas;
        
        senderDatas = internet.blockchainSocket.recv();
        
        if (senderDatas < 0 || senderDatas[0 : 4] == "error") {
            
            receptionErrors += 1;
            std::cout << "Error while receiving some datas from " << fromAddress <<" !" << std::endl;
            return false;
            
        } else {
            
            return senderDatas;
            
        };
        
    };
    
}
