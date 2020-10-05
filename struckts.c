#include <stdio.h>
#include <stdlib.h>

struct first{
    int x;
    int y;
    float z;
}; // Eger buraya da bir isim yazarsak buraya yazdigimiz isimle bir tane bu structtan tanimlamis olurduk

// Structlarin fonksiyon ile kullanımı
void structSizeof(struct first myStruct){
    printf("SIZEOF - first -> %d, first.x -> %d, first.y -> %d, first.z -> %d", sizeof(myStruct), sizeof(myStruct.x), sizeof(myStruct.y), sizeof(myStruct.z));   
}

// Structlarda pointer ile islem yapiliyorsa eleman secerken nokta (.) yerine ok (->) kullanilir.
void structPrint(struct first *myStruct){
    printf("x -> %d, y -> %d, z -> %f\n", myStruct->x, myStruct->y, myStruct->z);
}

int main(void){
    struct first one = {3, 4, 5.0};
    struct first two[5]; // Bu sekilde ayni yapidan pes pese 5 tane tanimlayabiliriz. kullanimi dizi kullanimi ile aynidir
    structPrint(&one);
    structSizeof(one);
    return EXIT_SUCCESS;
}