#include<stdio.h>
#include<stdint.h>

#define  ChekBit(mask,bit) !!((mask) & (1 << (bit)))
#define  SetBit(mask,bit) (mask) | (1 << (bit))
#define  ClearBit(mask,bit) (mask) & ~(1 << (bit))
#define ChengeBit(mask,bit) mask ^(1 << ((bit)-1))

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(num1,num2) ((num1)<(num2)?(num1):(num2))
#define MAX3(a,b,c) MAX(MAX(a,b),c)
#define MIN3(a,b,c) MIN(MIN(a,b),c)
#define SWAP(a,b,temp) \
    {                        \
        type temp = a;       \
        a = b;               \
        b = temp;            \
    }


    int main(){
        
    int a = 10, b = 30, c = 5;
    SWAP(a,b,temp);
    MAX(a,b);
    MIN(a,b);
    MAX3(a,b,c);
    MIN3(a,b,c);
    }