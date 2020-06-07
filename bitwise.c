#include "stdio.h"

int main(){
    unsigned int a = 29; // 29 = 0001 1101
    unsigned int b = 48; // 48 = 0011 0000

    printf("AND %d & %d = %d\n", a, b, a & b);  // 16 = 0001 0000
    printf("OR %d | %d = %d\n", a, b, a | b);   // 61 = 0011 1101
    printf("XOR %d ^ %d = %d\n", a, b, a ^ b);  // 45 = 0010 1101
    printf("One's complement ~%d = %d\n", a, ~a);   // -30 = 1110 0010
    printf("Logic left %d << 2 = %d\n", a, a << 2); // 116 = 0111 0100
    printf("Logic right %d >> 2 = %d\n", a, a >> 2);    // 7 = 0000 0111


}