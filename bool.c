#include "stdio.h"
#include "stdbool.h"



int main(int argc, char* argv[]){
    // bool tanimi "stdbool.h" kütüphanesi ile eklenir
    bool x = true;
    bool y = false;
    if(x)
        puts("Bu yazi yazilir.");
    if(!y)
        puts("Bu yazi da yazilir.");

    // Bool icin C icerisinde _Bool tanımı vardır.
    _Bool a = 1;
    _Bool b = 0;
    if(a)
        puts("Bu yazi yazilir.");
    if(!b   )
        puts("Bu yazi da yazilir.");

    return 0;
}