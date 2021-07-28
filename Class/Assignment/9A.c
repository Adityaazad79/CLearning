// Write a program in C to sort the numbers using Insertion Sort Algorithm user defined function.

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int ar[], int t, int n);

int main()
{
    int i, j, n, *arr, t;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int)); // Dynamic Memory Allocation
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);
    insertionSort(arr, n, t);
    return 0;
}

void insertionSort(int ar[], int n, int step)
{
    int i, j, temp;
    // Sorting the array upto the given number of steps by the user
    for (i = 1; i <= step; i++)
    {
        j = i - 1;
        temp = ar[i];
        while (j >= 0 && ar[j] > temp) // the condition for no not going out of range
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