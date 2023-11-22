#include <stdio.h>
int arr1[3][4];
int arr2[4][2];

int func1(int m, int n, int p, int q)
{
    if (m == 3)
    {

        return (arr1[p][3] * arr2[3][q]);
    }

    else
    {

        return (arr1[p][m] * arr2[n][q]) + (func1(m + 1, n + 1, p, q));
    }
}
int main()
{ // Matrix

    printf("INPUT VALUES FOR MATRIX A\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter value of %d row and %d column: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Your Matrix A is :\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("INPUT VALUES FOR MATRIX B\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter value of %d row and %d column: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Your Matrix B is :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
    }

    // int a00 = func1(0, 0, 0, 0);
    // int a01 = func1(0, 0, 0, 1);
    // int a10 = func1(0, 0, 1, 0);
    // int a11 = func1(0, 0, 1, 1);
    // int a20 = func1(0, 0, 2, 0);
    // int a21 = func1(0, 0, 2, 1);
    // printf("\n");
    // printf("%d\n", a00);
    // printf("%d\n", a01);
    // printf("%d\n", a10);
    // printf("%d\n", a11);
    // printf("%d\n", a20);
    // printf("%d\n", a21);
    
    int result[3][2];
    int l = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = func1(0, 0, i, j);
        }
    }
    printf("\nThe resultant matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // printf("\n a is %d", result[0][0]);
    // printf("\n a is %d", result[0][1]);
    // printf("\n a is %d", result[1][0]);
    // printf("\n a is %d", result[1][1]);
    // printf("\n a is %d", result[2][0]);
    // printf("\n a is %d", result[2][1]);

    return 0;
}