#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define ARLEN 15

static int arr[ARLEN];

// Bir arraya sirasiyla veri tanimlama 
void initArray(){
    for (size_t i = 0; i < ARLEN; i++)
        arr[i] = i + 100;
    
    for (size_t j = 0; j < ARLEN; j++)
        printf("eleman[%zu] -> %d\n", j, arr[j]);
}

// Array ile sirasiyla islem yaparken pointer kullanimi
void initArray2(){
    for (size_t i = 0; i < ARLEN; i++)
        arr[i] = i + i * i;
    
    int j = 0;
    for(int *p = arr; p < arr + ARLEN; p++)
        printf("eleman[%zu] -> %d\n", j++, *p);
}

// Bu metodun adi sifirlama (zeroing)
void clearArray(){
    for (size_t i = 0; i < ARLEN; i++)
        arr[i] = 0;    
    for (size_t j = 0; j < ARLEN; j++)
        printf("eleman[%zu] -> %d\n", j, arr[j]);
}

// Sifirlama icin bir diger secenek string.h kutuphanesinde bulunan memset() fonksiyonudur
void clearArray2(){
    memset(arr, 0, ARLEN * sizeof *arr);
//  veya
//  memset(arr, 0, sizeof arr);
//  ayni zamanda sifirlamak icin free() de kullanilabilir
    for (size_t j = 0; j < ARLEN; j++)
        printf("eleman[%zu] -> %d\n", j, arr[j]);
}

int main(void){
    initArray();
    clearArray();
    initArray2();
    clearArray2();
    return EXIT_SUCCESS;
}