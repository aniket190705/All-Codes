#include <stdio.h>
void func(int n)
{
    if (n == 0)
    {
        return;
    }

    else
    {
        printf("%d\n", n);
        func(n - 1);
    }
    return;
}

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    func(n);

    return 0;
}
