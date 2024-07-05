#include <stdio.h>

void printHighLowBits(unsigned short number) {
  
    unsigned char highBits = (number >> 8) & 0xFF;
   
    unsigned char lowBits = number & 0xFF;

    
    printf("High 8 bits: %d (0x%02X)\n", highBits, highBits);
    printf("Low 8 bits: %d (0x%02X)\n", lowBits, lowBits);
}

int main() {
    unsigned short number = 1234;
    printHighLowBits(number);
    return 0;
}
