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
    v e1, e2, s;

    e1.a;
    e1.b;
    printf("Enter the value of 1st vector\n");
    scanf("%d%d", &e1.a, &e1.b);
    // e1.i = 'i';
    // e1.j = 'j';

    // printf("%d%c+%d%c\n", e1.a, e1.i, e1.b, e1.j);
    printf("Enter the value of 2nd vector\n");
    scanf("%d%d", &e2.a, &e2.b);
    // (e2.a, e2.b, 'i', 'j');
    // printf("%d%c+%d%c", e2.a, e2.i, e2.b, e2.j);

    s = sum(e1, e2);
    printf("%d%c+%d%c", s.a, s.i, s.b, s.j);

    return 0;
}