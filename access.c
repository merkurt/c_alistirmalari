#include "stdio.h"

struct myStruct
{
    int x;
    int y;
    float z;
};

struct myStruct myObject;
struct myStruct *p = &myObject;

int main(){
    myObject.x = 58;
    myObject.y = 60;
    myObject.z = 58.58;
    printf(".x = %i, .y = %i, .z = %.2f\n", myObject.x, myObject.y, myObject.z);

    p -> z = 60.60;
    printf("%.2f", p -> z);
}