#include <stdio.h>
#include "Tutorial54.c"
#define PI 3.14   // now wherever in the code you write PI it will be equivalent to 3.14
#define SQUARE(r) r*r  // Now wherever you write SQUARE('any number') it will perform 'any number X any number'
int main()
{
    int a = 4;
    float var = PI;
    int *ptr = functionDangling();
    printf("The value of PI is %f\n", var);
    printf("The area of the circle is %f\n", PI * SQUARE(a));
    printf("The area of the circle is %f\n", PI * SQUARE(4));
    return 0;
}