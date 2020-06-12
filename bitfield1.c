#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

struct data{
    unsigned char a : 2;
    unsigned char b : 2;
    unsigned char c : 4;
};

struct data myData;
int main(void){
    printf("sizeof -> %d\n", sizeof(myData));
    for(int i=0;i<50;i++)
        printf("a->%d, b->%d, c->%d\n", ++myData.a, ++myData.b, ++myData.c);
    return EXIT_SUCCESS;
}