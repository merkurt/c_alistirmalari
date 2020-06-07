#include "stdio.h"
#include "string.h"

int main(void){
    char dst[24] = "Palyaco baligi: ";
    char src[] = "Marvin ve Nemo.";
    size_t len = strlen(dst);

    // strncat(eklenecek_degisken, eklenen_degisken, eklenen_degiskenden_ilk_kac_karakter_eklenecegi - 1)
    // eklenen_degiskenden_ilk_kac_karakter_eklenecegi - 1 -> son karakter '\0' olacagi icin bir eksigi eklenir.
    // Bu yontemle tasma olmasının onune gecilmis olur. 
    strncat(dst, src, sizeof(dst) - len - 1);
    printf("%zu: [%s]", strlen(dst), dst);
    return 0;
}