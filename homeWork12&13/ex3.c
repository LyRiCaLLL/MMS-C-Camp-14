#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define count 8

void VMirror(unsigned char *Image){
    char c = *Image;
    int d[count];
    for( int i = 0; i < count; i++){
        d[i] = c % 2;
        c = c / 2;

    }

    unsigned char p = 1;
    c = 0;

    for (int i = 7; i >= 0; i--, p *= 2)
    {
        c += p * d[i];
    }

    *Image = c;

}


int main(){





   unsigned char image[count] = {0x7F,0x40,0x40,0x40,0x7F,0x00,0x00, 0x00};


    for(int i = 0; i < count; i++) {

       VMirror(image+i);
       printf("0x0%x ", *(image+i));
    }





    return 0;
}