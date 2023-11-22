#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL;
    if (ptr == NULL)
    {
        printf("The pointer is NULL and cant be derefrence");
    }
    else
    {
        printf("The value of a is %d", *ptr);
    }

    return 0;
}