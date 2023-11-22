#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *func1(const char *str, const char *newWord, const char *oldWord)
{
    int count = 0;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])   //It returns ADDRESS from 'str'... If any word is same in 'str' and 'oldword' then it returns the address of the first letter of the same word from the str.
        {
            count++;
            i = i + oldWordLength - 1;
        }
    }
    char *resultString;
    printf("value of i is %d\n", i);
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    printf("oldword length %d\n", oldWordLength);
    printf("newword length %d\n", newWordLength);
    printf("count %d\n", count);
    printf("%d\n", i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);

            i += newWordLength;
            str += oldWordLength;
        }

        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    printf("length of result string %d\n", strlen(resultString));
    return resultString;
}
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("bill.txt", "r");
    char str[1];
    fgets(str, 200, ptr);
    printf("%d\n", strlen(str));
    printf("%s\n", str);

    char *resultString2 = func1(str, "Aniket", "{{name}}");

    resultString2 = func1(resultString2, "Fan", "{{item}}");

    resultString2 = func1(resultString2, "Harry outlet", "{{outlet}}");

    printf("%s", resultString2);
    return 0;
}