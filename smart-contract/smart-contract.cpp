namespace smartcontract {
    
    \*
     * Instructions / Instruction Binary Code : Calculation
     * 
     * INV/00000000 byte : Logic gate Invert the byte bits ( 00001111 => 11110000 etc )
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
    
    unsigned int DEPLOY(string orders) {
        
        
        
    };
    unsigned int RUN(string orders) {
        
        string resuts = [];
        
        for (unsigned long long i; i < orders.length; i++) {
            
            if (orders[i[0]] == "01100010" || orders[i[0]] == "01000010") { // if the first character of the order is a b or B then it's a binary order
                
                if (orders[i[1]] == "") {
                    
                    
                    
                };
                
            } else if (orders[i[0]] == "01101001" || orders[i[0]] == "01001001") { // if the first character of the order is an i or an I then it's a text order
                
                if (orders[i[1]] == "INV") {
                    
                    
                    
                } else if (orders[i[1]] == "AND") {
                    
                    
                    
                } else if (orders[i[1]] == "OR") {
                    
                    
                    
                } else if (orders[i[1]] == "XOR") {
                    
                    
                    
                } else if (orders[i[1]] == "NOT") {
                    
                    
                    
                } else if (orders[i[1]] == "NAND") {
                    
                    
                    
                } else if (orders[i[1]] == "NOR") {
                    
                    
                    
                } else if (orders[i[1]] == "XNOR") {
                    
                    
                    
                };
                
            };
            
        };
        
    };
    
}
