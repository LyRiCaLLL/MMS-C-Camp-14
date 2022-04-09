#include <stdio.h>
#include <stdlib.h>



unsigned char CheckBit(unsigned int uValue) {
        return (uValue&1) > 0 ? '1' : '0';
}
int main(){
    
    unsigned int number;
    
    printf("Enter number: ");
    
    scanf("%u", &number);

    (CheckBit(number) == '1')?printf("Ox01"):printf("0x00");
   

    return 0;
}