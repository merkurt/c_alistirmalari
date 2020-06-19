#include "stdio.h"
#include "stdlib.h"

int array[10];
int val;

int main(void){
    // arrayin 5. elemanina 5 degeri atandi
    array[4] = 5;

    // arrayin 5. elemanina 5 degeri atandi
    *(array + 4) = 5;

    // yukaridaki ile ayni isi yapar
    *(4 + array) = 5;

    printf("%d", array[4] == 4[array]);
    
    return EXIT_SUCCESS;
}