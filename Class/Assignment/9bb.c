// Write a program in c to find out maximum from each row and column of a 2D-Array.

#include <stdio.h>
#include <stdlib.h>
void inSo(int ar[], int n, int step) // Using User Defined Function

{
    int i, j, temp;
    // Sorting the array upto the given number of steps by the user
    for (i = 1; i <= step; i++)
    {
        j = i - 1;
        temp = ar[i];
        while (j >= 0 && ar[j] > temp) // Condition for not going out of range.
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%d ", ar[i]);
    printf("\n");
}
int main()
{
    int i, j, n, *arr, step;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int)); // Dynamic Memory Allocation
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &step);
    insertionSort(arr, n, step);
    return 0;
}