#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14
int Edistance(int x1, int z1, int x2, int y2)
{
    return (pow(pow(x2 - x1, 2) + pow(y2 - z1, 2), 0.5));
}

int areaOfCircle(int (*fptr)(int, int, int, int))
{
    int x1;
    int z1;
    int x2;
    int y2;
    printf("Enter x1 coordinate:");
    scanf("%d", &x1);

    printf("Enter y1 coordinate:");
    scanf("%d", &z1);

    printf("Enter x2 coordinate:");
    scanf("%d", &x2);

    printf("Enter x2 coordinate:");
    scanf("%d", &y2);

    printf("Area of circle of radius %d is %f", fptr(x1, z1, x2, y2), PI * pow(fptr(x1, z1, x2, y2), 2));
}

int main()
{

    int (*fptr)(int, int, int, int);
    fptr = &Edistance;
    areaOfCircle(fptr);
    return 0;
}
