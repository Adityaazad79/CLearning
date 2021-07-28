/* You are given two complex numbers as input. Complex number can be represent as a + ib, where
a is the real part and b is the imaginary part. In this question real part is always integer 
but the imaginary part is floating type. You have to do some operations on the given complex
numbers based on two choices.
choice 1: subtract the two complex numbers
choice 2: multiply the complex numbers.The result should be presented in a + ib format. */

#include <stdio.h>

typedef struct complex
{
    int a;
    float b;
} c;
int main()
{

    c e[3];
    int sub_mul;
    scanf("%d %f %d %f %d", &e[0].a, &e[0].b, &e[1].a, &e[1].b, &sub_mul); /* Input */
    switch (sub_mul)
    {
    case 1: /* If Subtracted */

        e[2].a = e[0].a - e[1].a;
        e[2].b = e[0].b - e[1].b;
        if (e[2].b > 0) /* If imaginary part is non-negative */
        {
            printf("%d + i%.2f", e[2].a, e[2].b);
        }
        else /* If imaginary part is negative */
        {
            printf("%d + (i%.2f)", e[2].a, e[2].b);
        }
        break;

    case 2: /* If multiplied */

        e[2].a = (e[0].a * e[1].a) - (e[0].b * e[1].b);
        e[2].b = (e[0].a * e[1].b) + (e[1].a * e[0].b);
        if (e[2].b > 0) /* If imaginary part is non-negative */
        {
            printf("%d + i%.2f", e[2].a, e[2].b);
        }
        else /* If imaginary part is negative */
        {
            printf("%d + (i%.2f)", e[2].a, e[2].b);
        }
        break;
    }
    return 0;
}