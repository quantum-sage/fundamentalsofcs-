#include <stdio.h>

int main(){
    unsigned char bytes[2] = {};
    bytes[0] = 0b01001000;
    bytes[1] = 0b01000010;
for (int b = 0; b < 2; b++){
    for (int i = 7; i >= 0; i--){
        int bit = (bytes[b] >> i) & 0b00000001;
        printf("%u",bit);
    }
    printf(" ");
    }
    printf("\n");
    
}