#include <stdio.h>
#define MAX 999
int main()
{
    int A[MAX][MAX];
    int n;
    int i, j;
    // part 1
    scanf("%d", &n);
    // checking if all elements in the upper half are 1 or not
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= ((n + 1) - i))
            {
                (A[i][j] = 1);
            }
        }
    }

    // checking if all elements in the lower half are -1 or not
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n; ++j)
        {
            if (j > ((n + 1) - i))
            {
                (A[i][j] = -1);
            }

            else // making diagonal element 0
            {

                if (j = ((n + 1) - i))
                {
                    A[i][j] = 0;
                }
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}