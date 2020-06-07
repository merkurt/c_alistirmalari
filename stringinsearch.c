#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//  klasor yolu uzerinde bir ornek:
char *getFileName(const char *path){
    char *pend;
    if((pend = strrchr(path, '\\')) != NULL){
        return pend + 1;

    return NULL;
    }
}

int main(int argc, char ** argv){

    if(argc != 2){
        printf("[%s] [icinde_a_aranacak_kelime]\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Tanimlanan karakterde buyuk kucuk farkeder!
    char toSearchFor = 'a';
        
    // strchr() -> stringin icerisinde aranan karakterin ilk bulundugu adresi verir.
    // strrchr() -> stringin iceriside aranan karakterin son bulundugu adresi verir.
    // strchr() fonksiyonundan donen adres ile icerisinde karakter aranan stringin adresi cikartilarak karakterin sirasi (bir eksigi) bulunur.
    char *firstOcc = strchr(argv[1], toSearchFor);
    if(firstOcc != NULL)
        printf("[%s] kelimesinin icerisindeki ilk [%c] harfi %td. sirada\n", argv[1], toSearchFor, firstOcc - argv[1]);
    else
        printf("[%s] kelimesinin icerisinde hic [%c] harfi yok!\n", argv[1], toSearchFor);
    
    char *lastOcc = strrchr(argv[1], toSearchFor);
    if(lastOcc != NULL)
        printf("[%s] kelimesinin icerisindeki son [%c] harfi %td. sirada\n", argv[1], toSearchFor, lastOcc - argv[1]);
    printf("[%s]", getFileName("C:\\Users\\KURT\\Desktop\\C\\derleme"));
    return EXIT_SUCCESS;
}