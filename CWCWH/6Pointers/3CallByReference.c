#include <stdio.h>

void no_swap(int a, int b);

void swap(int *a, int *b);

int main()
{
    int a = 5, b = 9;
    printf("The value of a and b is %d and %d\n", a, b);
    no_swap(a,b);
    printf("The value of a and b after no_swap is %d and %d\n", a, b);
    swap(&a, &b);
    printf("The value of a and b after swap is %d and %d\n", a, b);
    return 0;
}

void no_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}