#include <stdio.h>
void printStr(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char str[31] = "Hello";
    
    gets(str);
    printf("Using printf : %s\n", str); //'str' here is a pointer
    printf("Using custom function, while loop : ");
    printStr(str);
    printf("Using 'puts' :");
    puts(str);
    printf("Hello world");
    return 0;
}