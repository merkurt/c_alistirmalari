#include <stdio.h>

int main(){
    int x = 5;
    int y = 5;
    int *xptr = &x, *yptr = &y;
    printf("x = %d, y = %d\n", x, y);
    printf("x = %d, &x= %d, xptr = %d, *xptr = %d\n", x, &x, xptr, *xptr);
    printf("x == *xptr => %d, &x == xptr => %d\n", x == *xptr, &x == xptr);
    printf("*xptr == *yptr => %d, xptr == yptr => %d\n", *xptr == *yptr, xptr == yptr);

    // durum ? eger_dogruysa : eger_yanlissa
    puts("durum ? eger_dogruysa : eger_yanlissa");
    printf("x == y ise %d", x == y ? x : y);
    printf("x == y durumu %s", x == y ? "Dogru" : "Yanlis");
    

}