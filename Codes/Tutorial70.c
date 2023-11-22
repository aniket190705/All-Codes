#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[2]); // converts any argument to integer(argument to integer)
    int b = atoi(argv[3]);
    float c = atof(argv[2]); // converts any argument to float(argument to float)
    float d = atof(argv[3]);

    if (strcmp(argv[1], "add") == 0)
    {
        printf("The addition of the number is %d", a + b);
    }
    if (strcmp(argv[1], "subtract") == 0)
    {
        printf("The subtraction of the number is %d", a - b);
    }
    if (strcmp(argv[1], "multiply") == 0)
    {
        printf("The multiplication of the number is %d", a * b);
    }
    if (strcmp(argv[1], "divide") == 0)

    {
        printf("The division of the number is %f", c / d);
    }

    return 0;
}
