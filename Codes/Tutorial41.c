#include <stdio.h>
#include <string.h>

void parsar(char string[])
{
    int count = 0;
    int inn = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            inn = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            inn = 0;
            continue;
        }

        else if (inn == 0)
        {
            string[count] = string[i];
            count++;
        }
    }
    string[count] = '\0';
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }

    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h>    this is a heading    </h1>";
    printf("The string is :~~%s~~\n", string);
    parsar(string);
    // printf("%c", string[strlen(string) - 1]);
    printf("The parsed string is : ~~%s~~\n", string);

    return 0;
}