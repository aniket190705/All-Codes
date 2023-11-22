#include <stdio.h>
int main()
{
    // FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "w");
    // char c = fgetc(ptr);
    // printf("The character I get is: %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I get is: %c\n", c);

    // char str[4];
    // fgets(str, 3, ptr);
    // printf("The string I get is: %s", str);

    // fputc('O', ptr);
    // fputs("Hello world", ptr);
    // fclose(ptr); 

    FILE *ptr2 = NULL;
    ptr2 = fopen("myfile.txt", "a+");
    char str2[24];
    fputs("YOOOOOOOOOOOOOO", ptr2);
    // fgets(str2, 4, ptr2);
    // printf("%s", str2);

    fclose(ptr2);
    return 0;
}