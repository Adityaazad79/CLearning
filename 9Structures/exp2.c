#include <stdio.h>

int main()
{
    int n, i, j;
    int A[50][50];
    scanf("%d", &n);

    for (i = 0; i < n; i++)

        for (j = 0; j < n; j++)
        {

            {
                if (j <= ((n + 1) - i))
                {
                    (A[i][j] = 1);
                }
                if (j > ((n + 1) - i))
                {
                    (A[i][j] = -1);
                }

                if (j == ((n + 1) - i))
                {
                    A[i][j] = 0;
                }
            }
        }

    for (i = 0; i < n; i++)

    {

        for (j = 0; j < n; j++)

        {
            printf("%3d", A[i][j]);
        }

        printf("\n");
    }

    return 0;
}