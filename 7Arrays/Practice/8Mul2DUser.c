/*
Repeat problem 7 for a custom input given by the user.
*/

#include <stdio.h>

void mul(int *arr, int num)
{
    printf("The multiplication table of %d : \n", num);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", num, i + 1, arr[i]);
    }
    printf("*******************************\n\n");
}

int main()
{

    int arr[3][10];
    int num[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the numbers to print table for\n");
        scanf("%d", &num[i]);
    }

    mul(arr[0], num[0]);
    mul(arr[1], num[1]);
    mul(arr[2], num[2]);

    return 0;
}