#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

#define DIM_X 1000
#define DIM_Y 500
#define DIM_Z 200

int array0[10] = {1, 5, 7};  // Ilk 3 sayi 1, 5, 7 geri kalani 0

int array1[5] = {[2] = 5, [1] = 2, [4] = 9};    // {0, 2, 5, 0, 9}

double arr3D[3][2][4]={
                        {{-0.1, 0.22, 0.3, 4.3}, {2.3, 4.7, -0.9, 2}},
                        {{0.9, 3.6, 4.5, 4}, {1.2, 2.4, 0.22, -1}},
                        {{8.2, 3.12, 34.2, 0.1}, {2.1, 3.2, 4.3, -2.0}}};

// Bir arrayi tarayacagin zaman normal kullanim budur
// Alttaki ornek her satırın sutunlarını gezer
void normalArray(){
    int arr[DIM_X][DIM_Y];
    size_t i, j;
    for (i = 0; i < DIM_X; i++){
        for (j = 0; j < DIM_Y; j++){
            arr[i][j] = 0;
        }
    }
}

// Fakat bu sekilde kullanim yaparsan cache fault olur ve o an ulasmak istedigin array elemanindan farkli bir elemana ulasabilirsin
// Alttaki ornek her sutunun satirlarini gezer
void yanlisArray(){
    int arr[DIM_X][DIM_Y];
    size_t i, j;
    for (i = 0; i < DIM_Y; i++){
        for (j = 0; j < DIM_X; j++){
            arr[j][i] = 0;
        }
    }
}

// Yukaridaki normalArray fonksiyonunda tanimlanan kullanim dogrudur fakat ozellikle yuksek eleman sayili arraylarin tek boyutlu olması onerilir
// Buna "row-major order" denir (Bkz:https://en.wikipedia.org/wiki/Row-_and_column-major_order)
// Alttaki tanim iki boyutlu bir arrayi tek boyutlu kullanabilmek icin bir ornektir
void optimizeArray2D(){
    int arr[DIM_X * DIM_Y];
    size_t i, j;
    for (i = 0; i < DIM_X; i++){
        for (j = 0; j < DIM_Y; j++){
            arr[i * DIM_Y + j] = 0;
        }
    }
}

// Alttaki tanim cok boyutlu bir arrayi tek boyutlu kullanabilmek icin bir ornektir.
void optimizeArray3D(){
    int arr[DIM_X * DIM_Y * DIM_Z];
    size_t i, j, k;
    for (i = 0; i < DIM_X; i++){
        for (j = 0; j < DIM_Y; j++){
            for (k = 0; k < DIM_Z; k++){
                arr[i * DIM_Y * DIM_Z + j * DIM_Z + k] = 0;
            }
        }
    }
}

int main(void){
    size_t lenght = sizeof(array0) / sizeof(array0[0]); // Bir arrayin uzunlugunu bulma
    return EXIT_SUCCESS;
}