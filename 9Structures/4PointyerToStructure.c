#include <stdio.h>
#include <string.h>

struct employee // Declaring a new user defined data type.
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 100; // Here "->" is known as arrow operator.
    // (*ptr).code = 100; // This can also be used.
    printf("%d", e1.code);

    return 0;
}