#include <stdio.h>
int main()
{ //  1-D array//

    int marks[4];
    for (int i = 0; i < 4; i++)

    {
        printf("Enter marks of student %d\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Marks of student %d is %d\n", i, marks[i]);
    }

    // 2-D Arrays//

    int number[2][4] = {{1, 2, 3, 4}, {6, 5, 6, 8}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The %d, %d element of the array is %d\n", i, j, number[i][j]);
        }
    }
    // Matrix form
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    return 0;
}
