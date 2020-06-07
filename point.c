#include "stdio.h"

int main(void){
    int arr[] = {0, 1 ,2 ,3, 4, 5, 6, 7, 8, 9};
    printf("arr[3] = %i\n", *(arr + 3));
    puts(" *(arr + 3) = &arr + 3 -> adresinin barindirdigi degeri donderir");

}
