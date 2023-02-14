#include <std>

namespace node {
    
    unsigned int sendDatas(string datas) {
        
        string receiversResponses = [];
        unsigned long long transmissionErrors = 0;
        
        for (unsigned long long i; i < receiversResponses.length; i++) {
            
            if (receiversResponses[i[0 : 4]] == "error") {
                
                transmissionErrors += 1;
                std::cout << "Error when transmitting some datas to the nodes connected !" << std::endl;
                
            };
            
        };
        
    };
    unsigned int sendDatasTo(string toAddress, unsigned int toPort, string datas) {
        
        string receiverResponse;
        unsigned long long transmissionErrors = 0;
        
        if (receiverResponse[0 : 4] == "error") {
            
            transmissionErrors += 1;
            std::cout << "Error when tranmitting some datas to the node " << toAddress << " : " << toPort << " !" << std::endl;
            
        };
        
    };
    unsigned int receiveDatas() {
        
        string sendersDatas = [];
        unsigned long long transmissionErrors = 0;
        
    };
    unsigned int receiveDatasFrom(string fromAddress, string fromPort) {
        
        string senderDatas;
        unsigned long long transmissionErrors = 0;
        
    };
    
}
