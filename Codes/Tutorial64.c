#include <stdio.h>
int main()
{ //******READING A FILE*****
  // FILE *ptr1 = NULL;
  // char string1[34];
  // ptr = fopen("Myfile.txt", "r");
  // fscanf(ptr, "%s", string);
  // printf("The content of this file is %s\n", string);

    //*****WRITING A FILE*****//previous written data gets deleted

    // FILE *ptr2 = NULL;
    // char string2[64] = "This content was produced by Tutorial64.c";
    // ptr2 = fopen("Myfile.txt", "w");
    // fprintf(ptr2, "%s", string2);

    //*****APPENDING A FILE****//previous written data is retained, it doesnt get deleted.
    FILE *ptr3 = NULL;
    ptr3 = fopen("Myfile.txt", "a");
    char string[100] = "This content was produced by Tutorial64.c";
    fprintf(ptr3, "%s", string);
    return 0;
}