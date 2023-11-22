#include <stdio.h>
int sum(int a, int b);
void printsomething();
void printstar(int n) // with arguement and without return value
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
}

int takenumber() // without argument and with return value
{
    int i;
    printf("enter a number\n");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The sum is %d\n", c);
    printstar(5);
    c = takenumber();
    printf("the number is %d\n", c);
    printsomething();
    return 0;
}

int sum(int a, int b) // With arguement and with return value
{
    return a + b;
}

void printsomething()  //Without argument and without return value
{
    printf("something");
}