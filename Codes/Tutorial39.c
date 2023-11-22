#include <stdio.h>
#include <string.h>
union student
{
    int id;
    float marks;
    char name[30];
};

union student harry, ravi;

int main()
{
    
    harry.id = 1;
    strcpy(harry.name, "hurray");
    strcpy(ravi.name, "reeiii");
    ravi.id = 2;    /*ONLY LAST STATEMENT WILL GET PRINT CORRECTLY. OTHER WILL GET CORRUPTED. 
    HERE ONLY RAVI.ID WILL GET CORRECTLY PRINTED. THIS HAPPENS ONLY WITH UNION NOT STRUCT*/

    printf("harry id is : %d\n", harry.id);      
    printf("ravi id is : %d\n", ravi.id);
    printf("name 1 is %s\n", harry.name);
    printf("name 2 is %s\n", ravi.name);

    return 0;
}