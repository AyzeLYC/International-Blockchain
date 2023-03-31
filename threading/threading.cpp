#include <string>
#ifdef windows
    #include <windows.h>
    #include <iostream>
#elif linuxbased
    #include <pthread.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

namespace threading {
    
    unsigned int threadCounter;
    
    namespace calculate(unsigned int functionToCalculate) {
        
        DWORD threadId;
        HANDLE work = CreateThread(0, 0, functionToCalculate, &threadCounter, 0, &threadId);
        while (functionToCalculate) {
            
            functionToCalculate;
            
        };
        
    };
    
}
