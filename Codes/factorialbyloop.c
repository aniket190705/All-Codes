#include <stdio.h>
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int a;
    printf("Enter a number which you want factorial of : \n");
    scanf("%d", &a);

    printf("Factorial of %d is %d", a, factorial(a));
    return 0;
}
