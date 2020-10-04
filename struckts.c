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

int main(void){
    struct first one = {3, 4, 5.0};
    printf("x -> %d, y -> %d, z -> %f\n", one.x, one.y, one.z); 
    structSizeof(one);
    return EXIT_SUCCESS;
}