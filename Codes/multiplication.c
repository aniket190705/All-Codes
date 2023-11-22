#include <stdio.h>
int main()
{
    int a, i;
    printf("Enter a number\n");
    scanf("%d", &a);                         
    for (i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }

    return 0;
}
