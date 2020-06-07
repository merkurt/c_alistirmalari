#include "stdio.h"

int main(void){
    char buffer[50];
    double PI = 3.1415926;

    sprintf(buffer, "%.7f", PI);
    printf("PI -> [%s]\n", buffer);

    char sentence[50] = "tarih : 07-06-2020";
    char str[50];
    int year;
    int month;
    int day;

    // scanf() kullanırken ikinci arguman ilk argumanla aynı yazıma sahip olmalidir. Yoksa calismaz.
    sscanf(sentence, "%s : %2d-%2d-%4d", str, &day, &month, &year);
    printf("%s -> %02d-%02d-%04d\n", str, day, month, year);


    return 0;
}