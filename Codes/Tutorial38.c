#include <stdio.h>
int main()
{ // TYPEDEF <PREVIOUS_NAME> <ALIAS_NAME>
    typedef int i;
    i a = 2; // 'i' became nickname for int
    typedef unsigned long ul;
    ul l1, l2, l3;
    printf("%d\n", a);

    typedef struct Student
    {
        int id;
        char fav_char;
        float marks;
    } std; //"std" became new name OR nickname for the structure "student"

    std harry, ravi;
    harry.id = 45;
    printf("Id of harry is : %d\n", harry.id);

    int *b, c;
    b = &a;
    // c = &a;  // This line will show error because only variable 'b' became pointer variable not 'c'
    typedef int *pointer;
    pointer d, e;
    d = &a;
    e = &a; // HERE BOTH THE VARIABLES 'D' AND 'E' BECAME THE POINTER VARIABLE
   

    return 0;
}