#include <stdio.h>
#include <stdlib.h>
int main()
{
    // USE OF MALLOC// It doesnot initialises values from 0, It gives garbage value if we dont input any number in the array

    /*int *ptr;
    int n;
    printf("Enter the size of array you want\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element of the array\n", i);
        scanf("%d", &ptr[i]); // OR scanf("%d", *(ptr+i))
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %dth element of the array is %d\n", i, ptr[i]);
    }
    */

    // USE OF CALLOC// It initialises value from 0. If we dont input any value in the array it returns 0.

    int *ptr;
    int n;
    printf("Enter the size of array you want \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the %dth element of the array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %dth element of the array is %d\n", i, ptr[i]);
    }

    // USE OF REALLOC
    printf("Enter the new size of array you want \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the %dth new element of the array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %dth new element of the array is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}