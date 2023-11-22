#include <stdio.h>
void Triangular(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void rTriangular(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a;
    int n;
    printf("Enter 0 for Triangular star pattern. Enter 1 for reversed triangular star pattern : ");
    scanf("%d", &a);
    printf("Enter number of rows you want : ");
    scanf("%d", &n);
    if (a == 0)
    {
        Triangular(n);
    }
    else if (a == 1)
    {
        rTriangular(n);
    }

    else
    {
        printf("you have entered incorrect choice");
    }
    return 0;
}