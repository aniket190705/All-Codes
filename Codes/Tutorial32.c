#include <stdio.h>
void func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("At position %d the value of array is : %d  \n", i, array[i]);
    }
    /*array[0] = 50; This changes the value of the array in the main function. This does not happen with
    integer*/
    printf("\n");
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("At position %d the value of array is : %d  \n", i, *(ptr + i)); //    ptr[i] = *(ptr + i)
        printf("%x", ptr);
    }
    printf("\n");
    *(ptr + 1) = 8786;
}

void func3(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("At position %d the value of array is : %d\n", i, ptr[i]); //    ptr[i] = *(ptr + i)
    }
    printf("\n\n");
}

void func4(int arra[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("At position %d, %d the value of array is : %d\n", i, j, arra[i][j]);
        }
    }
}

int main()
{
    int arr[] = {23, 13, 3, 4};
    int arra[2][2] = {{1, 4}, {23, 56}};
    func1(arr);
    func2(arr);
    func2(arr);
    func3(arr);
    func4(arra);
    return 0;
}