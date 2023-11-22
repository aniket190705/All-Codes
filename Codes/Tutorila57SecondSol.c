#include <stdio.h>
int main()
{
    int a[3][4];
    int b[4][2];
    int result[3][2];
    printf("Enter values for first matri\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter value for %d row and %d column:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter values for second matri:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter value for %d row and %d column:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nYour first matri is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nYour second matri is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    int c = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                c += a[i][k] * b[k][j];
            }
            result[i][j] = c;
            c = 0;
        }
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}