#include "stdio.h"
#include "stdlib.h"

// Enum'lar en soldan itibaren sifirdan baslayarak numaralandirirlar.
// Eger esittir ile numarasini belirlerseniz herhangi bir tanesini onun sagindaki degerden itibaren verdiginiz numarayi arttirirlar
enum Dupes{Base, One, Two, Negative = -1, anotherZero};

enum color{RED, GREEN, BLUE};

void printColor(enum color chosenColor){
    const char *colorName = "Invalid color";
    switch (chosenColor){
        case RED:
            colorName = "RED";
            break;
        case GREEN:
            colorName = "GREEN";
            break;
        case BLUE:
            colorName = "BLUE";
            break;
    }
    printf("[%s]\n", colorName);
}

int main(void){
    enum color chosenColor;
    printf("anotherZero -> [%d]\n", anotherZero);
    printf("Enter a number between 0 and 2:\n");
    scanf("%d", (int*)&chosenColor);
    printColor(chosenColor);    
    return EXIT_SUCCESS;
}