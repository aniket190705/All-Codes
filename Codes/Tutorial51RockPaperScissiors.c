#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    int player = 0;
    int comp = 0;
    int count = 0;
    while (player < 3 & comp < 3)

    {
        int a;

        srand(time(NULL));
        printf("Enter your choice :\n1.ROCK\n2.PAPER\n3.SCISSORS\n");
        scanf("%d", &a);
        char *arr[3] = {"ROCK", "PAPER", "SCISSORS"};
        printf("player chose : %s\n", arr[a - 1]);
        srand(time(NULL));
        int b = rand() % 3;
        printf("Computer chose : %s\n\n", arr[b]);
        if (a == 1 & b == 0) // ROCK AND ROCK
        {
            printf("ITS A DRAW!!\n");
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }
        if (a == 2 & b == 1) // PAPER AND PAPER
        {
            printf("ITS A DRAW!!\n");
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }
        if (a == 3 & b == 2) // SCISSIORS AND SCISSIORS
        {
            printf("ITS A DRAW!!\n");
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }
        else if (a == 1 & b == 1) // ROCK AND PAPER
        {
            printf("THE COUMPUTER WON!!\n");
            comp++;
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }
        else if (a == 1 & b == 2) // ROCK AND SCISSIORS
        {
            printf("YOU WON!!\n");
            player++;
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }

        else if (a == 2 & b == 0) // PAPER AND ROCK
        {
            printf("THE PLAYER WON\n");
            player++;
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }
        else if (a == 2 & b == 2) // PAPER AND SCISSIORS
        {
            printf("THE COMPUTER WON\n");
            comp++;
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }
        else if (a == 3 & b == 0) // SCISSIORS AND ROCK
        {
            printf("THE COMPUTER WON\n");
            comp++;
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }

        else if (a == 3 & b == 1) // SCISSIORS AND PAPER
        {
            printf("THE PLAYER WON\n");
            player++;
            printf("THE SCORES ARE :\nCOMPUTER - %d\nPLAYER - %d\n", comp, player);
        }
    }
    if (player == 3)
    {
        printf("CONGRATULATIONS PLAYER WON THE COMPETITION!!");
    }
    if (comp == 3)
    {
        printf("CONGRATULATIONS COMPUTER WON THE COMPETITION!!");
    }

    return 0;
}