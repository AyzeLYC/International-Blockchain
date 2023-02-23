namespace smartcontract {
    
    \*
     * Instructions / Instruction Binary Code : Calculation
     * 
     * INV/00000000 byte : Logic gate Invert the byte bits ( 00001111 => 11110000 etc )
     * AND/00000001 byte1 byte2 : Logic gate OR between each bit of both bytes
     * OR0/00000010 byte1 byte2 : Logic gate AND between each bit of both bytes
     * XOR/00000011 byte1 byte2 : Logic gate XOR between each bit of both bytes
     * NOT/00000100 byte1 byte2 : Logic gate NOT between each bit of both bytes
     * NND/00000101 byte1 byte2 : Logic gate NAND between each bit of both bytes
     * NOR/00000110 byte1 byte2 : Logic gate NOR between each bit of both bytes
     * XNR/00000111 byte1 byte2 : Logic gate XNOR between each bit of both bytes
     *
     * ADD/00001000 byte1 byte2 : Add the bit 2 to the bit 1 of each byte together
     * MIN/00001001 byte1 byte2 : Remove the bit 2 to the bit 1 of each byte together
     * MUL/00001010 byte1 byte2 : Multiply each bit of the byte 1 by their respective byte 2 bit
     * DIV/00001011 byte1 byte2 : Divide each bit of the byte 1 by their respective byte 2 bit
     * SQR/00001100 byte1 : Multiply the byte by itself
     * SRR/00001101 byte1 : Calculate the square root of the byte
    *\
    
    string ledger = {};
    
    unsigned int deploy(string orders) {
        
        
        
    };
    unsigned int run(string orders) {
        
        
        
    };
    unsigned int delete(string address) {
        
        
        
    };
    
}
