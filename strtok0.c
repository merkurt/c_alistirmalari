#include "stdio.h"
#include "string.h"

int main(void){
    int toknum = 0;
    char src[] = "Hello,, World!";
    const char delimiters[] = ", !";
    char *token = strtok(src, delimiters);
    while(token != NULL){
        printf("%d: [%s]\n", ++toknum, token);
        token = strtok(NULL, delimiters);
    }

    return 0;   
}


/*
strtok() fonksiyonu bir string'i delimiters olarak belirtilen ayrcalarla boler.
Bu bolme islemi sirasinda pes pese delimiters listesinde var olan ayrac varsa onlari bir kabul eder.
iki parametre alır: islenecek string ve ayraclar.
!! Delimiters const olmalı fakat string asla const olmamali !!
Bunun sonucunda char tipinde bir adrese tanimlanmasi gereklidir. Cünkü daha sonra tekrar tekrar kullanılabilir.
Eger birden fazla kez kullanılacaksa, ikinci kullanimdan itibaren string parametresi olarak 'NULL' almalıdır.
Eger NULL almazsa tekrar az önceki degeri dondurur.
Çünkü strtok() pythondaki sep() fonksiyonunun aksine bir parçalayıcı değil sınırlayıcıdır. Gördüğü ilk ayracla stringi sınırlar
!! Yukarıdak örnekte *token adresinde stringin geri kalanı hala saklıdır. NULL verilerek geri kalanı ile işlem yapmaya devam edilir.
İşlem yaptıkça token adresinden string eksilmeye devam eder.
token == NULL olduğu zaman string son karakterine kadar çözülmüş olur.

*/