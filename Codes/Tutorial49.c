#include <stdio.h>

int sum = 343;
int myfunc(int a, int b)
{
    // auto int sum;
    extern int sum; //    extern
    // sum = a + b;
    return sum;
}
int main()
{

    // Declaration - telling the compiler about the variable (no space reserved)
    // definition - Declaration + space reservation
    int sum = myfunc(5, 3);
    int myVar = func();
    myVar = func();
    myVar = func();
    return 0;
}
int func()
{
    static int a;
    printf("The sum is %d\n", a);
    a++;
    return a;
}