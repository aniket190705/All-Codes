#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("This file name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("Line No is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__); // '1' output here means true. Means yes we are compling this file with ANSI standard
                                    // pata nahi 'ANSI standard' kya hai
    return 0;
}