#include <stdio.h>

int main(){
    unsigned char bytes[10] = {};

    bytes[0] = 0b01001000; //bin
    bytes[1] = 0x65; //hex
    bytes[2] = 167; //decimal
    bytes[3] = 0154; //octal
    bytes[4] = 'F'; //char #-->char - ascii


printf("Idx Dec Hex  Oct         Binary   Char\n");
printf("---- ---- ---- ---- ----\n");
for(int i = 0; i < 10; i++){
    printf("[%2u] %3u %2x  %3o",i,bytes[i], bytes[i], bytes[i]);
    
    for(int b = 7; b >= 0; b--){
        int bit = (bytes[i] >> b) & 0b00000001;
        printf("%u", bit);
    } 
    printf("  %c\n",bytes[i]);
    
}
return 0;
}