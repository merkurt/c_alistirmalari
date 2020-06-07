#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void){

    // Bu durumda dogrudan 'a' stringindeki degeri 'b' stringine atayamayız derleyici hata verir.
    // Bunun icin strcopy() kullanmak gerekir.
    // strcpy(atanacak_degisken, atanan_degisken)
    char a[] = "abc";
    char b[8];

    strcpy(b, a);
    printf("a -> [%s], b -> [%s]\n", a, b); 
    a[1] = 'x';
    printf("a -> [%s], b -> [%s]\n", a, b); 

    return EXIT_SUCCESS;
}

// Kopyalama isleminde tasma (buffer overrun) olabilir. (Örn: 'a' degiskeni 8 karakterden uzun olsaydı).
// Bunun icin snprintf() kullanilir. (Bknz: stringsnprintf.c) 
// Stringin sonunda baska bir string eklemek isteyebilirsin. (Bknz: stringstrcat.c)