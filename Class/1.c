#include <stdio.h>

int main()
{
    int a, b, c;
    printf("what is the length and breadth of the rectangle  \n", a, b);
    scanf("%d%d", &a, &b);
    c = a * b;
    printf("The area of the rectangle is %d", c);

    return 0;
}