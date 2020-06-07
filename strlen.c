#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(int argc, char **argv){

    if(argc != 2)
        return EXIT_FAILURE;

    size_t len = strlen(argv[1]);
    printf("Girilen arguman uzunlugu %d", len);        
    return EXIT_SUCCESS;
}