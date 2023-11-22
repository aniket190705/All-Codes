#include <stdio.h>
int main()
{
    int a = 76;
    int *ptr = &a;
    int *ptr2 = NULL;

    printf("The value of a is %d\n", *ptr);
    printf("The value of a is %d\n", a);
    printf("The address of a is %x\n", ptr);
    printf("The address of a is %x\n", &a);
    printf("The address of ptr is %x\n", &ptr);
    printf("The address of some garbage is %x ", ptr2);
    return 0;
}
