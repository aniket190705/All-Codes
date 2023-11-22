#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[20];
    puts(strcat(s1, s2));
    printf("The length of s1 is : %d \n", strlen(s1)); // s1 stored the concatenated value
    printf("The length of s2 is : %d \n", strlen(s2));
    printf("The reversed stirng of s1 is : ");
    puts(strrev(s1));
    strcpy(s3, strcat(s1, s2));
    puts(s3);
    printf("The cmp for s1 and s2 is : %d", strcmp(s1, s2)); /* returns 0 if both the strings are same,
    returns 1 if assci value of first unmatched character of s2 is greater than the first unmatched character of s1,
    returns -1 if assci value of first unmatched character of s2 is less than the first unmatched character of s2
    */
    return 0;
}