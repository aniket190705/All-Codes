#include <stdio.h>

// KHATARNAK LOGIC CHAHIYE ISME!!!!! ZYADA TIME WASTE MAT KARNA AGAR SYLLABUS ME NAA HO!!!!//

// int fibonacci_recursive(int number)
// {
//     if (number == 1 || number == 2)
//     {
//         return number - 1; // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
//     }
//     else
//     {
//         return (fibonacci_recursive(number - 1) + fibonacci_recursive(number - 2));
//     }
//}
int fibonacci_iterative(int number)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < number - 1; i++)
    {
        b = a + b; // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34             
        a = b - a;
    }
    return a;
}
int main()
{
    int number;
    printf("Enter the term till you want fibonacci series of :");
    scanf("%d", &number);
    //printf("The fibonacci series till the term %d is %d\n", number, fibonacci_recursive(number));
    printf("The fibonacci series till the term %d is %d", number, fibonacci_iterative(number));
}
