#include <string>

namespace smartcontract {
    
    \*
     * Instructions / Instruction Binary Code : Calculation
     * 
     * INV/00000000 byte : Logic gate INVERT each bit of the bytes
     * AND/00000001 byte1 byte2 : Logic gate OR between each bit of both bytes
     * OR/00000010 byte1 byte2 : Logic gate AND between each bit of both bytes
     * XOR/00000011 byte1 byte2 : Logic gate XOR between each bit of both bytes
     * NOT/00000100 byte1 byte2 : Logic gate NOT between each bit of both bytes
     * NAND/00000101 byte1 byte2 : Logic gate NAND between each bit of both bytes
     * NOR/00000110 byte1 byte2 : Logic gate NOR between each bit of both bytes
     * XNOR/00000111 byte1 byte2 : Logic gate XNOR between each bit of both bytes
     *
     * ADD/00001000 byte1 byte2 : Add the bit 2 to the bit 1 of each byte together
     * MIN/00001001 byte1 byte2 : Remove the bit 2 to the bit 1 of each byte together
     * MUL/00001010 byte1 byte2 : Multiply each bit of the byte 1 by their respective byte 2 bit
     * DIV/00001011 byte1 byte2 : Divide each bit of the byte 1 by their respective byte 2 bit
     * SQR/00001100 byte1 : Multiply the byte by itself
     * SRR/00001101 byte1 : Calculate the square root of the byte
     *
     * CPY/00001110 address : Copy into the processing
     * GET/00001111 url : Get some datas from an URL
     * REM/00010000 addressString : Delete some datas from a datas ledger
    *\
    
    string ledger = {};
    
    unsigned int DEPLOY(string orders, string fee) {
        
        
        
    };
    unsigned int RUN(string orders) {
        
        string resuts = [];
        
        for (unsigned long long i; i < orders.length; i++) {
            
            if (orders[i[0]] == "01100010" || orders[i[0]] == "01000010") { // if the first character of the order is a b or B then it's a binary order
                
                if (orders[i[1]] == 0x00000000) { // invert
                    
                    
                    
                };
                if (orders[i[1]] == 0x00000001) { // and
                    
                    
                    
                };
                if (orders[i[1]] == 0x00000010) { // or
                    
                    
                    
                };
                if (orders[i[1]] == 0x00000011) { // xor
                    
                    
                    
                };
                if (orders[i[1]] == 0x00000100) { // not
                    
                    
                    
                };
                if (orders[i[1]] == 0x00000101) { // not and
                    
                    
                    
                };
                if (orders[i[1]] == 0x00000110) { // not or
                    
                    
                    
                };
                if (orders[i[1]] == 0x00000111) { // xnot or
                    
                    
                    
                };
                
                if (orders[i[1]] == 0x00001000) { // plus
                    
                    
                    
                };
                if (orders[i[1]] == 0x00001001) { // minus
                    
                    
                    
                };
                if (orders[i[1]] == 0x00001010) { // multiply
                    
                    
                    
                };
                if (orders[i[1]] == 0x00001011) { // divide
                    
                    
                    
                };
                if (orders[i[1]] == 0x00001100) { // square
                    
                    
                    
                };
                if (orders[i[1]] == 0x00001101) { // square root
                    
                    
                    
                };
                
                if (orders[i[1]] == 0x00001110) { // copy
                    
                    
                    
                };
                if (orders[i[1]] == 0x00001111) { // get
                    
                    
                    
                };
                if (orders[i[1]] == 0x00010000) { // remove
                    
                    if (ledger.contains(orders[i[2]])) {
                        
                        ledger.erase(remove(ledger.begin(), ledger.end(), orders[i[2]]));
                        results.append(true)
                        
                    } else {
                        
                        results.append(false);
                        
                    };
                    
                };
                
            } else if (orders[i[0]] == "01101001" || orders[i[0]] == "01001001") { // if the first character of the order is an i or an I then it's a text order
                
                if ((orders[i[1]] == "inv" || orders[i[1]] == "INV") {
                    
                    
                    
                };
                if (orders[i[1]] == "and" || orders[i[1]] == "AND") {
                    
                    
                    
                };
                if (orders[i[1]] == "or" || orders[i[1]] == "OR") {
                    
                    
                    
                };
                if (orders[i[1]] == "xor" || orders[i[1]] "XOR") {
                    
                    
                    
                };
                if (orders[i[1]] == "not" || orders[i[1]] == "NOT") {
                    
                    
                    
                };
                if (orders[i[1]] == "nand" || orders[i[1]] == "NAND") {
                    
                    
                    
                };
                if (orders[i[1]] == "nor" || orders[i[1]] == "NOR") {
                    
                    
                    
                };
                if (orders[i[1]] == "xnor" || orders[i[1]] == "XNOR") {
                    
                    
                    
                };
                
                if (orders[i[1]] == "add" || orders[i[1]] == "ADD") {
                    
                    uint9_t results = [];
                    unsigned long long k = 0;
                    
                    while (k < orders[i[2]].length()) {
                        
                        results.append(orders[i[2[k]]] + orders[i[3[k]]]);
                        k++;
                        
                    }
                    return results;
                    
                };
                if (orders[i[1]] == "min" || orders[i[1]] == "MIN") {
                    
                    unsigned short results = [];
                    unsigned long long k = 0;
                    
                    while (k < orders[i[2]].length()) {
                        
                        results.append(orders[i[2[k]]] - orders[i[3[k]]]);
                        k++;
                        
                    }
                    return results;
                    
                };
                if (orders[i[1]] == "mul" || orders[i[1]] == "MUL") {
                    
                    uint8192_t results = [];
                    unsigned long long k = 0;
                    
                    while (k < orders[i[2].length()]) {
                        
                        results.append(orders[i[2[k]]] * orders[i[3[k]]]);
                        k++;
                        
                    }
                    return results;
                    
                };
                if (orders[i[1]] == "div" || orders[i[1]] == "DIV") {
                    
                    unsigned short results = [];
                    unsigned long long k = 0;
                    
                    while (k < orders[i[2]].length()) {
                        
                        results.append(orders[i[2[k]]] / orders[i[3[k]]]);
                        k++;
                        
                    }
                    
                    return results;
                    
                };
                if (orders[i[1]] == "sqr" || orders[i[1]] == "SQR") {
                    
                    uint8192_t results = [];
                    unsigned long long k = 0;
                    
                    while(k < orders[i[2]].length()) {
                        
                        results.append(orders[i[2[k]]] * orders[i[2[k]]]);
                        k++
                        
                    }
                    
                    return results;
                    
                };
                if (orders[i[1]] == "srr" || orders[i[1]] == "SRR") {
                    
                    
                    
                };
                
                if (orders[i[1]] == "cpy" || orders[i[1]] == "CPY") {
                    
                    
                    
                };
                if (orders[i[1]] == "get" || orders[i[1]] == "GET") {
                    
                    
                    
                };
                if (orders[i[1]] == "rem" || orders[i[1]] == "REM") {
                    
                    if (ledger.contains(orders[i[2]])) {
                        
                        ledger.erase(remove(ledger.begin(), ledger.end(), orders[i[2]]));
                        results.append(true)
                        
                    } else {
                        
                        results.append(false);
                        
                    };
                    
                };
                
            };
            
        };
        
    };
    
}
