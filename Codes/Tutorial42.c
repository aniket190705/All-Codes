#include <stdio.h>
int b = 34;   // this is a global variable
int func1(int b)
{
    static int myvar = 0;  // value doesnt reset to 0 after calling this function again again
    // printf("The address of b inside func1 is %d\n", &b);   // local value priority is higher than global value
    printf("return value of myvar is %d\n", myvar);

    myvar++;
    return b + myvar;
}

int main()
{
    int b = 344;
    printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;

    return 0;
}