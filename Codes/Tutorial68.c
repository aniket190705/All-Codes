#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc); // argv already contains the file name at index 0. Here its 'Tutorial68.exe'
    for (int i = 0; i < argc; i++)             // argc(arg count) returns integer. It gives number of string in the argv.
                                               // argv(arg value) returns string. It is a array of pointers.
    {
        printf("This argument at index number %d has this value => '%s'\n", i, argv[i]);
    }

    return 0;
}
