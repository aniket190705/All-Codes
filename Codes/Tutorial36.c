#include <stdio.h>
void arrRev(int arr[])
{
    int temp;

    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printf("Array before reversal\n");
    for (int i = 0; i < 7; i++)
    {
        printf("At position %d the value of array is %d\n", i, arr[i]);
    }

    printf("\n\n");

    arrRev(arr);

    printf("Array after reversal\n");
    for (int i = 0; i < 7; i++)
    {

        printf("At position %d the value of array is %d\n", i, arr[i]);
    }

    return 0;
}
