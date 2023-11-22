#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int count = 0;
    printf("enter a number");
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("prime number");
    }

    else
    {
        printf("Not a prime number");
    }

    return 0;
}
