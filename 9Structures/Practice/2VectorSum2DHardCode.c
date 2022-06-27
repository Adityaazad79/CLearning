/*
Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.
*/
//Hard Coded

#include <stdio.h>

typedef struct vector
{
    int a, b;
    char i, j;
} v;

v sum(v e1, v e2)
{
    v s = {(e1.a + e2.a), (e1.b + e2.b), 'i', 'j'};
    return s;
}
int main()
{
    v e1,s;

    e1.a = 1;
    e1.b = 2;
    e1.i = 'i';
    e1.j = 'j';

    // printf("%d%c+%d%c\n", e1.a, e1.i, e1.b, e1.j);
    v e2 = {4, 6, 'i', 'j'};
    // printf("%d%c+%d%c", e2.a, e2.i, e2.b, e2.j);

    s = sum(e1, e2);
    printf("%d%c+%d%c", s.a, s.i, s.b, s.j);

    return 0;
}