/* Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are
these addresses same? Why? */
// Beacuse the value on the specific address on memory is copied.

#include <stdio.h>

void add(int x);

int main()
{
    int i = 4;
    int *a;
    a = &i;
    printf("1. Address of i is %u\n", &i);
    add(i);
    return 0;
}

void add(int x)
{
    printf("2. Address of i is %u\n", &x);
}