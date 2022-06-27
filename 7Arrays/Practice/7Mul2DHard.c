/*
Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
*/

#include <stdio.h>

int main()
{
    int arr[3][10];

    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 2 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("2 * %d = %d\n", i + 1, arr[0][i]);
    }

    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 7 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("7 * %d = %d\n", i + 1, arr[0][i]);
    }

    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 9 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("9 * %d = %d\n", i + 1, arr[0][i]);
    }

    return 0;
}