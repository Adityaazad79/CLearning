#include <stdio.h>

int main()
{
    int a = 5;
    int *i = &a;
    // int **j = &i;
    printf("%u\n", &i);
    printf("%d\n", *i);
    // printf("%d\n", *j);
    // printf("%d\n", **j);
    printf("%u\n", &i);
    printf("%u\n", &a);

    return 0;
}