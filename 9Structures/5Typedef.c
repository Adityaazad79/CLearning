#include <stdio.h>
#include <string.h>

typedef struct employee // Declaring a new user defined data type.
{
    int code;
    float salary;
    char name[10]; 
} emp; //  emp as custom data type.

// Now we can use "emp" in place of "struct employee". We can use any of the two as well.

void show(emp e)
{
    printf("The code of employee is : %d\n", e.code);
    printf("The salary of employee is : %f\n", e.salary);
    printf("The name of employee is : %s\n", e.name);
}

int main()
{
    // Declaring e1 and pointer.
    emp e1;
    emp *ptr;

    ptr = &e1; // Pointing ptr to e1.
    //Setting member values for e1.
    ptr->code = 100; // Here "->" is known as arrow operator.
    ptr->salary = 1.2;
    strcpy(ptr->name, "Amit");

    emp adi = {22, 299, "Aditya"};

    show(e1);
    show(adi);

    return 0;
}