#include <stdio.h>
#include <string.h>
int isPalindrome(char arr[])
{

    char arr2[20];
    strcpy(arr2, arr);

    strrev(arr);
    if (strcmp(arr, arr2) == 0) //'strcmp' returns 0 if both the strings are same. Else 1 or -1.
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char arr[20];
    printf("Enter the number you want to check :");
    scanf("%s", &arr);
    isPalindrome(arr);

    if (isPalindrome(arr))
    {
        printf("The number %s is not a palindrome ", &arr[0]);
    }
    else
    {
        printf("The number %s is a palindrome", &arr[0]);
    }
    
    return 0;
}