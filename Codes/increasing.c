#include <stdio.h>
void increasing(int x, int n)
{

    if (x > n)
    {
        return;
    }
    else
    {
        printf("%d", x);
        increasing(x + 1,n);
    }
}

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    increasing(1, n);
    return 0;
}
