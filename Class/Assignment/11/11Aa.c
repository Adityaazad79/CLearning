#include <stdio.h>
#include <stdlib.h>

int check_palin(int sum)
{
    int num, rev = 0;
    num = sum;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    if (sum == rev)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int i, k = 0, arr[100], s = 0, j, result = 0;
    char ch;
    while (1)
    {
        scanf("%d%c", &arr[k++], &ch);
        if (ch == '\n')
            break;
    }
    if (k < 2)
    {
        printf("no");
        exit(0);
    }
    for (i = 0; i < k; i++)
    {
        s = s + arr[i];
        for (j = i + 1; j < k; j++)
        {
            s = s + arr[j];
            result = check_palin(s);
            if (result == 1)
            {
                printf("yes");
                exit(0);
            }
        }
        s = 0;
    }
    if (result == 0)
    {
        printf("no");
    }
    return 0;
}