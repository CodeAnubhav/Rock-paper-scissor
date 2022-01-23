#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// if you win return 1 and if draw return 0 and if comp win return -1
int RockPaperSessior(char you, char comp)
{
    // cases coverd :
    // ss
    // rr
    // pp
    if (you == comp)
    {
        return 0;
    }

    // no draw condition
    // cases coverd:
    // pr
    // rp
    // ps
    // sp
    // rs
    // sr
    if (you == 'P' && comp == 'R')
    {
        return 1;
    }
    else if (you == 'R' && comp == 'P')
    {
        return -1;
    }

    if (you == 'P' && comp == 'S')
    {
        return -1;
    }
    else if (you == 'S' && comp == 'P')
    {
        return 1;
    }

    if (you == 'R' && comp == 'S')
    {
        return 1;
    }
    else if (you == 'S' && comp == 'R')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    int numbers;
    srand(time(0));
    numbers = rand() % 100 + 1; // random number between 1 to 100

    if (numbers < 33)
    {
        comp = 'R';
    }
    else if (numbers > 33 && numbers < 66)
    {
        comp = 'S';
    }
    else
    {
        comp = 'P';
    }

    printf("Enter 'R' for Rock , Enter 'P' for Paper , Enter 'S' for Sessior\n");
    scanf("%c", &you);
    int result = RockPaperSessior(you, comp);
    printf("you chose %c and comp choose %c\n", you, comp);

    if (result == 0)
    {
        printf("**GAME DRAW**");
    }
    else if (result == 1)
    {
        printf("**YOU WIN**");
    }
    else
    {
        printf("**YOU LOSE**");
    }

    return 0;
}