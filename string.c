#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void){
    //  Çift tırnak içinde tanımlanan stringlerin sonuna otomatik olarak '\0' eklenir.

    //  Bu tanim yonteminde string read-only moddadır degistirilmek istenirse 'undefined behaviour' verir.
    //  Bu sebeple onune 'const' eklenmesi daha sagliklidir.
    char const * string1 = "Bu string ilk karakterinin adresi gosterilerek olusturulmustur.";

    // Bu tanim yonteminde string program icerisinde modifiye edilebilir.
    char string2[] = "Bu string dizi olusturma mantiginda olusturulmustur.";

    // Eger stringi tanimlarken cift tirnak icinde yazmayacaksan sonuna '\0' yani NULL karakter eklemelisin.
    char string3[] = {'a','b','c','d','e','f','g','h','\0'};

    printf("[%s]\n[%s]\n[%s]", string1, string2, string3);

    return EXIT_SUCCESS;
}