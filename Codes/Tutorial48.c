#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;

    int n;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d enter the length of your employee ID\n", i + 1);
        scanf("%d", &n);
        ptr = (char *)malloc((n + 1) * sizeof(char));//'n+1' because '\0' also takes space for string.
        printf("Employee %d enter your employee ID\n", i + 1);
        scanf("%s", ptr);
        printf("Your employee ID is : %s\n", ptr);
        i++;

    }

    return 0;
}