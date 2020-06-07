#include "stdio.h"

int fonk(int x, int y){
    return (x > 0) ? x*x*y : y*y*x;
}

// pointer ile cagirma
int (*foo)(int, int) = &fonk;


int main(){
    int x = 12, y = 5;
    printf("(*foo)(%d, %d) = %d", x, y, (*foo)(x, y));
    return 0;


}
