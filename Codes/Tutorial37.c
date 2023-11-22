#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[];
};

int main()
{
    struct Student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 100;
    ravi.marks = 95;
    shubham.marks = 45;
    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    shubham.fav_char = 'p';
    //shubham.name = "yo"; // IDK YE KYU ERROR AA RAHA HAI
    strcpy(harry.name, "yo yo honey singh");
    printf("harry got %d marks\n", harry.marks);
    printf("harry's name is : %s ", harry.name);

    return 0;
}