#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void){
    // Eger buffer overrun (TAŞMA) durumundan kacinmak istiyosan snprintf() kullanabilirsin.
    // ! Ama bu en iyi performans cozumu degildir ! Bknz:stringstrncat()
    // Burada 8 karakter uzunlugundaki bir string degiskenine alabilecegi kadar deger atanıyor yani ilk 7 deger + '\0'.
    // Ikı stringi birlestirmek istersek yine (Bknz: stringstrncat())
    char a[] = "01234567890123456789";
    char b[8];

    snprintf(b, sizeof(b), "%s", a);
    printf("%s", b);
    return EXIT_SUCCESS;
}