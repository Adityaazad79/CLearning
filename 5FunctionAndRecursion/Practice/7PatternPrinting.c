/*  
Write a program using functions to print the following pattern(first n lines):
*
***
***** 
*/

#include <stdio.h>

void ptrn(int n);

int main()
{
    int n;
    printf("Enter the no of lines to print\n");
    scanf("%d", &n);
    ptrn(n);
    return 0;
}

void ptrn(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    ptrn(n - 1);
    {
        for (int i = 0; i < (2 * n - 1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
}            