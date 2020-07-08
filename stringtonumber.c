#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char **argv){
    if(argc != 2)
        return EXIT_FAILURE;

    char *krktr;

    // Stringi sayi ve karakter olarak ayrımak icin
    // sayilarin_atanacagi_deger = strtol(ayrilacak_string, karakterlerin_atanacagi_degisken_adresi, sayilarin_kaclik_tabanda_olacagi)
    long int val = strtol(argv[1], &krktr, 10);
    printf("[%s] -> %d, %s\n", argv[1], val, krktr);
    
    // Intager sayi direkt bu sekilde cevirilebilir
    int num = atoi(argv[1]);
    printf("ATOI -> [%d]\n", num);

    return EXIT_SUCCESS;
}