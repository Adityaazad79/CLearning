//  Which of the following is invalid in c..?
// - Valid but doesn't gives the desired output i.e 3 power 3. But it's xor operator.

#include <stdio.h>

int main()
{
    int v = 3 ^ 3;
    printf("%d", v);

    return 0;
}