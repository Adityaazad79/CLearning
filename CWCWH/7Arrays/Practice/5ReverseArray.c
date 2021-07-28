#include <stdio.h>

void rev(int *arr, int n)
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    rev(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}