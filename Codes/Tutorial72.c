#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int (*fptr)(int, int); // declaring a function pointer
    fptr = &sum;           // creating a function pointer
    int d = (*fptr)(7, 7); // derefrencing a funciton pointer
    printf("%d", d);
    return 0;
}
