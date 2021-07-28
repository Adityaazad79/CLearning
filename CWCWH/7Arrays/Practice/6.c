#include <stdio.h>

void count(int *arr)
{
    int n = 0;
    for (int i = 0; i < 11; i++)
    {
        if (arr[i] > 0)
        {
            n++;
        }
    }
    printf("%d\n", n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 0, -1, -2, -3, -4, -5, -6, -7};
    count(arr);

    return 0;
}