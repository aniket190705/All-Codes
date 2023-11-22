#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a = 34;
    // return &a; This line will give error
}
int main2() //'main2' because I am including this file in 'Tutorial59.c'
{
    // CASE 1: DE ALLOCATION OF MEMORY BLOCK

    int *ptr = malloc(7 * sizeof(int));
    ptr[0] = 12;
    ptr[1] = 23;
    ptr[2] = 54;
    ptr[3] = 56;
    free(ptr); // now ptr is a dangling pointer

    // CASE 2 : FUNCTION RETURNING LOCAL VARIABLE ADDRESS

    int *danglingPtr = functionDangling(); /* danglingPtr is now a dangling pointer because when the function
    ends all the variable in the function gets deleted means 'a' will get deleted hence danglingPtr will point to a free space*/

    // CASE 3 : VARIABLE GOES OUT OF SCOPE

    int *ptr3;
    { // scope starts here
        int b = 23;
        ptr3 = &b;
    } // scope ends here
    /*Here variable goes out of scope which means 'Ptr3' is pointing to a location which is freed
    and hence 'ptr3' is a dangling pointer*/
    return 0;
}