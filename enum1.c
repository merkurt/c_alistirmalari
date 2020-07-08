#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include "string.h"

// Istenirse eleman numarasi esittir kullanarak ayrica belirlenebilir
enum week{DOW_INVALID = -1, MON, TUE, WED, THU, FRI, SAT, SUN, DOW_MAX};

// Array'in kolonlari bu sekilde belirlenebilir
static const char* const dow[] = {[MON] = "Mon", [TUE] = "Tue", [WED] = "Wed", [THU] = "Thu", [FRI] = "Fri", [SAT] = "Sat", [SUN] = "Sun"};

void printOfWeek(enum week day){
    assert(day > DOW_INVALID && day < DOW_MAX); // Eger aralikta degilse hata verecek
    printf("[%s]\n", dow[day]);
}

int main(int argc, char **argv){
    printOfWeek(atoi(argv[1]));
    return EXIT_SUCCESS;
}