#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}

void goodNight(int (*fptr)(int, int)) //"fptr" is a parameter  =>  fptr = ptr
{
    printf("Good Night\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

void goodMorning(int (*fptr)(int, int)) //"fptr" is a parameter  =>  fptr = ptr
{
    printf("Good morning\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{

    int (*ptr)(int, int);
    ptr = &sum;
    goodMorning(ptr); //"ptr" is given as argument
    goodNight(ptr);
    return 0;
}
