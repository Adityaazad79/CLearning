#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a = 4, b = 7;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of 4+7 is %d\n", sum(a, b));
    printf("The value of a and b is after using function is %d and %d\n", a, b);
    return 0;
}

int sum(int a, int b)
{
    int c;
    a = 22222;
    b = 3331;
    c = a + b;
    return c;
}