#include <stdio.h>

int main()
{
    int i = 8;
    int *j; // Declaring variable 'j' of type int-pointer.
    j = &i; // Stores address of 'i' in 'j'.
    printf("Add i=%u\n", &i);
    printf("Add i=%u\n", j);
    printf("Add j=%u\n", &j);
    printf("Value i=%d\n", i);
    printf("Value i=%d\n", *(&i));
    printf("Value i=%d\n", *j);

    return 0;
}