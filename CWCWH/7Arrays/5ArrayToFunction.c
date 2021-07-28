#include <stdio.h>

// void PrintArr(int ptr[], int n)    // *ptr = name of array; int n = size of array
// or
void PrintArr(int *ptr, int n) // *ptr = name of array; int n = size of array
{
    for (int i = 0; i < n; i++)
    {
        // printf("The value of %dth element is %d\n", i + 1, ptr[i]);
        // or
        printf("The value of %dth element is %d\n", i + 1, *(ptr + i));

        ptr[2] = 5555;
    }
}

int main()
{
    int arr[] = {4, 6, 7, 8};
    PrintArr(&arr[0], 4); // "&arr[0]" = "arr"

    printf("%d\n", arr[2]);

    return 0;
}