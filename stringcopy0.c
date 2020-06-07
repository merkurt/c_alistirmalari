#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(void){
    int a = 10, b;
    char c[] = "abc", *d;

    // Sayılarla tanımlamış değerleri birbirine kopyalayabiliriz.
    b = a;
    a = 20;
    printf("a -> %d, b -> %d\n", a, b);

    // Asagidaki durumda 'd' degiskenine 'c' nin adresi kopyalanir. (Bunu istemiyosan strcpy() kullan -> stringcopy1.c'ye bak)
    // Yani bu durumda 'c' degiskeni degistikce 'd' degiskeni de degisir.
    d = c; 
    c[1] = 'x';
    printf("c -> [%s], d -> [%s]", c, d);

    
    return EXIT_SUCCESS;
}