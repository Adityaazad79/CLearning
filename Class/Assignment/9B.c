// Write a program in c to find out maximum from each row and column of a 2D-Array.

#include <stdio.h>
void maxRow(int arr[10][10], int r, int c)
{
    int rmax, i, j;
    for (i = 0; i < r; i++)
    {
        rmax = arr[i][0];
        for (j = 0; j < c; j++)
        {
            /* First value of each row is checked with the other values 
            and if it comes out to be greater then we are overwriting the rmax variable */

            if (arr[i][j] > rmax)
            {
                rmax = arr[i][j];
            }
        }
        printf("%d ", rmax);
    }
}

void maxCol(int arr[10][10], int r, int c)
{
    int cmax, i, j;
    for (i = 0; i < r; i++)
    {
        cmax = arr[0][i];
        for (j = 0; j < c; j++)
        {
            /* First value of each column is checked with the other values 
            and if it comes out to be greater then we are overwriting the max_column
             variable */

            if (arr[j][i] > cmax)
            {
                cmax = arr[j][i];
            }
        }
        printf("%d ", cmax);
    }
    printf("\n");
}

int main()
{
    int arr[10][10];
    int i, j, r, c;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    maxRow(arr, r, c);
    maxCol(arr, r, c);
    return 0;
}