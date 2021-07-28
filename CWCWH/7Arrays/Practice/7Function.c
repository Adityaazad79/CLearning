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
    mul(arr[0], 2);
    mul(arr[1], 7);
    mul(arr[2], 9);

    return 0;
}