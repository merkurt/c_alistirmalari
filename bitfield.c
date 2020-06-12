#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"

/* bit-field nedir?
genelde bir degiskenin range'ini belirlemek icin kullanilir
örn a -> 0 - 7
    b -> 0 - 3 gibi.
Veya birden fazla kucuk range'li sayilar barindiran bir yapi varsa bellekteki harcanacak alani azaltmak icin.
*/

/* ! UYARI !
1. Dizilerde, pointerlarda, return iceren fonksiyonlarda kullanilamaz.
2. Adres operatoru (&) ile kullanilamaz.
3. Tanimlandigi veri turundan daha buyuk alan atanamaz. (orn: unsigned char c1 : 20;)
4. sizeof() operatoru struct'ı genel olarak hesaplar fakat tek basina bir verinin boyutunu vermez.
5. 1 bit icin tek basina bir typedef olusturulmaz.
*/

// isaretsiz 3 bitlik (0-7) bir tam sayi tutacak degisken tanimi yapiyoruz
// ':' operatoru burada '=' operatorundan farkli olarak degiskenin degerini degil, bellek boyutunu (kac bit?) belirtir.
struct{
    unsigned int  uint3: 3;
}small;

// A yapisi 1 byte'dir
// 1. bayt -> c1, c2 ve c3
struct A{
    unsigned char c1 : 3;
    unsigned char c2 : 4;
    unsigned char c3 : 1;
};

// B yapisi 2 byte'dir 
// 1. bayt -> c1 ve c2
// 2. bayt -> c3 ve c4
struct B{
    unsigned char c1 : 1;
    unsigned char    : 2; // iki bit bosluk biraktik
    unsigned char c2 : 2;
    unsigned char    : 0; // bir sonraki bayta atladik
    unsigned char c3 : 4;
    unsigned char c4 : 1;
};

// 8 bit (1 bayt) buyuklugunde 5 parcaya bolunmus data degiskeni tanimlar
typedef union {
    struct {
        unsigned int a: 2;
        unsigned int b: 1;
        unsigned int c: 3;
        unsigned int d: 1;
        unsigned int e: 1;
    };
    uint8_t data;
}union_bit;

struct A aYapisi;
struct B bYapisi;
int main(void){
    unsigned int value = 255 - 2;   // Binary 1111 1101
    small.uint3 = value;            // Binary       101

    printf("value -> %d, small.uint3 = value -> %d\n", value, small.uint3);
    printf("A yapisi %d bayt, B yapisi %d bayt\n", sizeof(aYapisi), sizeof(bYapisi));

    union_bit un_bit;
    un_bit.data = 0x00; // Direkt olarak data bitine atama yapilabilir
    un_bit.a = 2;
    printf("%d %d %d %d %d", un_bit.a, un_bit.b, un_bit.c, un_bit.d, un_bit.e);   
    return EXIT_SUCCESS;
}