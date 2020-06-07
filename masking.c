/*
 * 1 sayısı gelen değerin toplam biti kadar sola kaydırılarak maske oluşturulmalı
 * gelen sayı maske ile AND işlemine sokularak sonucun sıfırdan farklı olup olmadığına bakılmalı
 *  sıfırdan farklı ise -> 1
 *  sıfır ise -> 0 
*/

#include "stdio.h"
#include "limits.h"

void bit_pattern(int u){
    unsigned mask = 1;
    mask <<= (CHAR_BIT * sizeof(u) - 1);    // CHAR_BIT = 8
    for(int i = 1;i <= (CHAR_BIT * sizeof(u));i++){
        int x = (u & mask) ? 1 : 0;
        printf("%d",x);
        mask >>= 1;    
    }   

}

int main(){
    bit_pattern(325656);
    return 0;
}