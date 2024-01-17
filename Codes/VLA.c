#include <stdio.h>
void VLAworking()
{ // The size of the array is declared during runtime. So VLA is applied here.

    int n;

    printf("Enter size of array");
    scanf("%d", &n);
    int arr1[n];
    // Input array elements more than the size of the array
    printf("Enter array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("printing\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr1[i]);
    }

    return 0;
}

VLAnotworking()
{
    // In your provided code, you did not use Variable Length Arrays (VLAs). The array arr1 is declared with a fixed size of 5, and the size is not determined at runtime. VLAs are typically declared with a size based on a variable determined at runtime.
    int n;

    int arr1[5]; // Declare an array of size 5

    // Input array elements more than the size of the array
    printf("Enter array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("printing\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr1[i]);
    }

    return 0;
}

int arrayreverse(int arrB[2], int n)
{ /*agar arrA ki size 5 daali hai aur arrA ko actual parameter me pass kiya but arrayreverse function me arrB[2] size di hai matlab iski size kam hai actual parameter se, that is arrA, jiski size 5 hai. Still arrB saare elements le leta hai arrA ke, even arrB ki size kam hai arrA se aur code chal jata hai. THIS IS BECAUSE OF VLA (VARIABLE LENGTH ARRAY). CHATGPT KA EXPLANATION ==>>
In the function declaration int func(int arr[2], int n), the [2] is just a hint to the programmer that the function expects an array of size 2, but it doesn't impose any restrictions on the actual size of the array passed to it. This is why you can pass an array of size 5 to the function without causing a compilation error.*/

    printf("In the function\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arrB[i]);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter size of array");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Error");
    }

    int arrA[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]);
    }

    arrayreverse(arrA, n);
    return 0;
}
