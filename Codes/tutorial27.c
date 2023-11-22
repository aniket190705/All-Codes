#include <stdio.h>
int main()
{
    char b = '3';
    int *ptrb = &b;

    int a = 34;
    int *ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", ptr + 1);
    printf("%d\n", sizeof(a));
    printf("%d\n", ptrb);
    printf("%d\n\n\n", ptrb + 1);
    int arr[] = {1, 5, 4, 5, 6, 3, 89};
    int *arrayptr = arr;
    printf("The value of first element of the array is %d\n", arr[0]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);

    arrayptr++; // But "arr=++" will through an error//
    
    // *IMPORTANT*    arr[i]==*(arr + i)//
    //if arr is a pointer to arr[0] then arr + i is a pointer to arr[i]//
    
    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array is %d", *(arr + 1));

    return 0;
}
