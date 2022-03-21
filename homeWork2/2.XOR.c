#include<stdio.h>

#include <stdint.h>
int main()
{
    while (1)
    {
        
    
uint32_t mask;
unsigned bit;
printf("mask =");
scanf("%d", &mask);
printf("bit =");
scanf("%d", &bit);
if(mask ^(1<< bit)){

    printf("1\n");
}else{
    printf("0\n");
}
    
    }

}