#include <stdio.h>

int main()
{
    int nstu = 3;
    int nsub = 2;
    int arr[nstu][nsub];
    for (int i = 0; i < nstu; i++)
        for (int j = 0; j < nsub; j++)
        {
            printf("Enter the marks in subject %d of %dth student : ", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }

    for (int i = 0; i < nstu; i++)
        for (int j = 0; j < nsub; j++)
        {
            printf("The value of the marks in subject %d of %dth student is %d\n", j + 1, j + 1, arr[i][j]);
        }

    return 0;
}