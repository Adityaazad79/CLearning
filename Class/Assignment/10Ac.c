// Write a program in C to Compare two given string in alphanumeric order without using standard library function.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *sta, *stb;
    int n, i, flag = 0;
    sta = (char *)malloc(10 * sizeof(char)); // Dyanamic Memory Allolocation
    stb = (char *)malloc(10 * sizeof(char));
    scanf("%[^\n]%*c", sta); // User Input
    scanf("%[^\n]%*c", stb);
    // n = strlen(sta);
    if (strlen(sta) > strlen(stb))
    {
        n = strlen(sta);
    }
    else
    {
        n = strlen(stb);
    }
    if (n)
        for (i = 0; i <= n; i++)
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
        printf("%d", flag);
    }
    return 0;
}