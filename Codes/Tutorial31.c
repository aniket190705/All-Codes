#include <stdio.h>
void changeValue(int *address)
{
    *address = 345;
}
int addSub(int *x, int *y)
{
    int z;
    z = *x;
    *x = *x + *y;
    *y = z - *y;
    return *x, *y;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a is %d\n", a);
    changeValue(&a);
    printf("The value of a is %d\n\n", a);

    int x = 4, y = 3;   //short quiz
    addSub(&x, &y);
    printf("%d  %d", x, y);
    return 0;
}