/* Show an identity matrix when multiplied by itself always results in the same identity matrix.
If the input matrix is not identity matrix then print not an identity matrix and
if it is not even a square matrix, then print not a square matrix. Allocate the memory dynamically. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[10][10];
    int i, j, r, c, s1 = 0, s2 = 0, k;
    scanf("%d %d", &r, &c);
    int **arr = (int **)malloc(r * sizeof(int *)); // Dyanamic Memory Allocation
    for (i = 0; i < r; i++)
    {
        arr[i] = malloc(sizeof(int) * c);
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j && arr[i][j] == 1)
            {
                s1 += arr[i][j];
            }
            else
            {
                s2 += arr[i][j];
            }
        }
    }
    if (r != c)
    {
        printf("not a square matrix");
        exit(0);
    }
    if (s1 == r && s2 == 0) // s1 = Sum of diagonal elements & s2 = Sum of other elements(except diagonal elements)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                arr1[i][j] = 0;
                for (k = 0; k < r; k++)
                {
                    arr1[i][j] += arr[i][k] * arr[k][j];
                }
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("not an identity matrix");
        exit(0);
    }
    return 0;
}