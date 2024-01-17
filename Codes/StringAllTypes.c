#include <stdio.h>

int main()
{

    char arr1[] = {'a', 'b', 'c'};
    for (int i = 0; i < 3; i++)
    {
        printf("%c", arr1[i]); // arr1[i] is not a pointer!
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", arr1[i]); // ASCII VALUE IS PRINTING!!
    }
    printf("\n");

    // char arr1[] = {'akakj', 'ajfdhkj'}; // ERROR!!!
    // printf("%d", arr1);    //GARBAGE VALUE

    char arr2[] = {"abcde"}; // arr2[] = {"abcd"} ===> arr2[] = {'a','b','c','d'}
    for (int i = 0; i < sizeof(arr2); i++)
    {
        printf("%c", arr2[i]); // arr2[i] is not a pointer
    }
    printf("\n%s", arr2); //'arr2' here is like pointer to the first element

    char arr3[] = "abcdef";   // arr3[] = "abcd" ===> arr3[] = {'a','b','c','d'}
    printf("\n%s", arr3);     //'arr3' here is like pointer for the first element. Tells the memory location of the first element.
    printf("\n%s", &arr3[1]); //'&arr3[1]' tells the memory location of the 2nd element.
    printf("\n%s", &arr3[2]); //'&arr3[2]' tells the memory location of the 3rd element.
    printf("\n");
    for (int i = 0; i < sizeof(arr3); i++)
    {
        printf("%c", arr3[i]);
    }
    printf("\n");

    char *arr4[3] = {"1abcd ", "2efgh ", "3ijkl "}; // ARR4 IS ARRAY OF POINTERS. WE CANT WRITE arr4[] = {"word1", "word2"}

    printf("size of arr4 is %d", sizeof(arr4));
    printf("\n");

    // arr[0] = (arr + 0 X sizeofstring) => 1000 + 0 => 1000 => memory location of first element
    // arr[1] = (arr + 1 X sizeofstring) => 1000 + 4 => 1004 => memory location of second element

    for (int i = 0; i < 3; i++)
    {
        printf("%s", arr4[i]);
    }
}
