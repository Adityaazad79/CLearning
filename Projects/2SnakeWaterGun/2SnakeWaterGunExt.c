// Incomplete

#include <stdio.h>

int swg(char c, char u);

int main()
{
    char User1, User2, name1[20], name2[20];
    printf("Enter the name of 1st User\n");
    scanf("%s", name1);
    printf("Enter the name of 2nd User\n");
    scanf("%s", name2);
    printf("\nEnter 's' for Snake, 'w' for water and 'g' for Gun\n\n");
    printf("%s pls enter your choice\n", name1);
    scanf("%s", &User1);
    printf("%s pls enter your choice\n", name2);
    scanf("%s", &User2);
    int result;
    result = swg(User1, User2);
    if (result == -1)
    {
        printf("%s WON!\n", name1);
    }
    else if (result == 1)
    {
        printf("%s WON!\n", name2);
    }
    else
    {
        printf("DRAW!\n");
    }

    return 0;
}

int swg(char u1, char u2)
{
    if (u1 == u2)
    {
        return 0;
    }

    else if (u1 == 's' && u2 == 'w')
    {
        return -1;
    }
    else if (u1 == 'w' && u2 == 's')
    {
        return 1;
    }

    else if (u1 == 'w' && u2 == 'g')
    {
        return -1;
    }
    else if (u1 == 'g' && u2 == 'w')
    {
        return 1;
    }

    else if (u1 == 'g' && u2 == 's')
    {
        return -1;
    }
    else if (u1 == 's' && u2 == 'g')
    {
        return 1;
    }
}