#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Hello Universe\n");
        i2 = (int *)malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i2[0] = 2;
        printf("%d", i2[0]);
        i++;
        free(i2);
        
    }
    return 0;
}
