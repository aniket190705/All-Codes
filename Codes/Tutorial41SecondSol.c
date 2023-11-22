#include <stdio.h>
#include <string.h>
void parsar(char string[])

{
    int b;
    int a;
    int c = 0;
    int index = 0;
    for (int i = 0;; i++)
    {
        if (string[i] == '>')
        {
            a = i + 1;
            break;
        }
    }
    for (int i = strlen(string);; i--)
    {
        if (string[i] == '<')
        {
            b = i - 1;
            break;
        }
    }

    for (int i = a; i <= b; i++)
    {
       
        string[c] = string[i];
        c++;
    }
    
    string[b + 1] = '\0';
    printf("~~%s~~", string);
printf("\n");

    for (int i = 0;; i++)
    {
        if (string[i] != ' ')
        {
            a = i;
            break;
        }
    }
    for (int i = strlen(string)-1;; i--)
    {
        if (string[i] != ' ')
        {
            b = i;
            break;
        }
    }

    for (int i = a; i <= b; i++)
    {
        string[index] = string[i];
        index++;
    }
    string[index] = '\0';

}

int main()
{
    char string[] = "<h>      this is a heading      </h>";

    parsar(string);
    printf("~~%s~~", string);



    return 0;
}