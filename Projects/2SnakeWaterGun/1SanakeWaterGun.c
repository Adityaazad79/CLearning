#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int swg(char c, char u);

int main()
{
    int result, n;
    char comp, user;
    srand(time(0));
    n = rand() % 100 + 1;
    if (n < 33)
    {
        comp = 's';
    }
    else if (n > 33 && n < 67)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter 's' for Snake, 'w' for water and 'g' for Gun\n");
    scanf("%c", &user);
    result = swg(comp, user);
    if (result == -1)
    {
        printf("Computer WON!\n");
    }
    else if (result == 1)
    {
        printf("You WON!\n");
    }
    else
    {
        printf("DRAW!\n");
    }

    return 0;
}

int swg(char c, char u)
{
    if (c == u)
    {
        return 0;
    }

    else if (c == 's' && u == 'w')
    {
        return -1;
    }
    else if (c == 'w' && u == 's')
    {
        return 1;
    }

    else if (c == 'g' && u == 'w')
    {
        return -1;
    }
    else if (c == 'w' && u == 'g')
    {
        return 1;
    }

    else if (c == 'g' && u == 's')
    {
        return -1;
    }
    else if (c == 's' && u == 'g')
    {
        return 1;
    }
}