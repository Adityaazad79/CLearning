/*
Create a two-dimensional vector using structures in C.
*/

#include <stdio.h>

typedef struct vector
{
    int a, b;
    char i, j;
} v;

int main()
{
    v e1;

    e1.a = 1;
    e1.b = 2;
    e1.i = 'i';
    e1.j = 'j';

    printf("%d%c+%d%c\n", e1.a, e1.i, e1.b, e1.j);
    // vector e2 = {4, 6, 'g', 'h'};
    // printf("%d%c+%d%c", e2.a, e2.i, e2.b, e2.j);

    return 0;
}