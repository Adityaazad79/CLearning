// 1D array all possible operations... Q3
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[] = {0, 2, 3, 4, 5};
    int *p = a;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", a[0]);
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", (p + 1));
    printf("%d\n", (&a + 1));
    printf("%d\n", (a + 1));
    printf("%d\n", (*p + 1));
    printf("%d\n", (a[0] + 1));
    printf("%d\n", *(p + 1));
    printf("%d\n", *(&a + 1));
    return 0;
}