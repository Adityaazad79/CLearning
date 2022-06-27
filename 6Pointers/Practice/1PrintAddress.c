//  Write a program to print the address of a variable. Use this address to get the value of this variable.

#include <stdio.h>

int main()
{
    int a = 4, b = 5;
    int *i, *j;
    i = &a;
    j = &b;
    printf("Address of varibale a = %u\n", &a);
    printf("Address of varibale b = %u\n", &b);
    printf("Address of varibale a = %u\n", i);
    printf("Address of varibale b = %u\n", j);
    printf("Value of variabel a = %d\n", *i);
    printf("Value of variabel b = %d\n", *j);

    return 0;
}