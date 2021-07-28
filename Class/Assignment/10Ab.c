#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *sta, *stb;
    int n, i, flag = 0;
    sta = (char *)malloc(100 * sizeof(char));
    stb = (char *)malloc(100 * sizeof(char));
    scanf("%s", sta);
    scanf("%s", stb);
    n = strlen(sta);
    for (i = 0; i < n; i++)
    {
        if (sta[i] != stb[i])
        {
            flag = 1;
            printf("%d\n", sta[i] - stb[i]);
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d\n", flag);
    }
    return 0;
}