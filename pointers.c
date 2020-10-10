#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// pointerlar ile fonksiyondan coklu deger dondurme
// array gönderilirse normal array seklinde kullanilir ama normal deger gonderilirse * ile yazilir
// ayni sey structlarda da vardir. struct gonderilirse normal struct olarak kullanilir ama -> isareti ile nokta ile degil
void dortIslem(int a, int b, int* sonuc, int* carpim){
    sonuc[0] = a + b;
    sonuc[1] = a - b;
    *carpim = a * b;
}

int main(int argc, char *argv[]){
    int a = 50, b = 5;
    int sonuc[2] = {0, 0};
    int carpim = 0;

    printf("a:%d, b:%d, toplam:%d, fark:%d, carpim:%d\n", a, b, sonuc[0], sonuc[1], carpim);
    dortIslem(a, b, &sonuc[0], &carpim);
    printf("a:%d, b:%d, toplam:%d, fark:%d, carpim:%d\n", a, b, sonuc[0], sonuc[1], carpim);

    return EXIT_SUCCESS;
}