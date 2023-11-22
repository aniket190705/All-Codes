#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 45;
    int *ptr; // This is a wild pointer. Pointer which is not intialise is called wild pointer.
    //*ptr = 34; // This is not a good thing to do
    ptr = &a; // Now ptr is no longer a wild pointer
    printf("The value of a is %d", *ptr);
    return 0;
}