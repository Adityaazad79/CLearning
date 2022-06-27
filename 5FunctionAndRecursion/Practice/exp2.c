#include <stdio.h>

int main(void)
{
    int a = 16777217 * 1.0f;
    int b = 16777217 * 1.0;

    printf("%d %d\n", a, b);
}

// Output : 16777216 16777217