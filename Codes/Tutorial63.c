#include <stdio.h>
int isPalindrome(int a)
{
    int result = 0;
    int b = a;
    while (a != 0)
    {

        result = result * 10 + a % 10;
        a = a / 10;
    }
    if (result == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    if (isPalindrome(a))
    {
        printf("The number %d is Palindrome", a);
    }

    else
    {
        printf("The number %d is not a Palindrome", a);
    }
    return 0;
}