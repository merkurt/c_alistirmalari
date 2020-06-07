#include <stdio.h>
#include <stdint.h>
int main(int argc, char **argv){

    uint16_t ok = 58;
    puts("Hello world!");
    printf("%d adet kelime girdin\n",argc);
    printf("%d, [%s], [%s]\n", argc, argv[0], argv[1]);
    printf("%d = ok",ok);
    return 0;

}