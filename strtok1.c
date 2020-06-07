#include "stdio.h"

#define __STDC_WANT_LIB_EXT1__ 1
#include "string.h"
#ifndef __STDC_WANT_LIB_EXT1__
# error "we need strtok_s from Annex K"
#endif

int main(void){
    char src[] = "1.2,3.4,5.6";
    char *next;
    char *first = strtok_r(src, ",", &next);
    do
    {
        char *part;
        char *posn;
        printf("[%s]\n", first);
        part = strtok_r(first, ".", &posn);
        while (part != NULL)
        {
            printf("[%s]\n", part);
            part = strtok_r(NULL, ".", &posn);
        }
        
    } while ((first = strtok_r(NULL, ",", &next)) != NULL);
    
    return 0; 
}