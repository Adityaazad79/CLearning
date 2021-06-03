#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    printf("The solution of the equation 3*2/3-3+1 is %d\n", 3 * 2 / 3 - 3 + 1);

    return 0;
}

/* Here 3*2/3-3+1
Here '*' and '/' have the same priority so it follows operator associativity i.e from left to right. Hence,
(2*3)/3-3+1
6/3-3+1
Now '/' has the higher priority so,
-3+1
Again '-' and '+' has the same priority and again operator associativity comes in. So
-1+1
Hence equals 0. */