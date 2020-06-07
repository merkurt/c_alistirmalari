#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void){
    // strcat kullanilacaksa pointer ile tanimlanamaz cünkü pointerla tanimlaninca sadece okunabilir, yazilamaz.
    char mystring[10];

    // strcpy stringi direkt kopyalar
    // strcat stringi sonuna ekler
    strcpy(mystring, "foo");
    printf("[%s]", mystring);
    strcat(mystring, "bar");
    printf("[%s]", mystring);
    strcpy(mystring, "OK");
    printf("[%s]", mystring);

    return EXIT_SUCCESS;
}