/*
Complete this show function to display the content of the employee.
void show(struct employee e);   =>Function prototype
*/

#include <stdio.h>
#include <string.h>

struct employee // Declaring a new user defined data type.
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e)
{
    printf("The code of employee is : %d\n", e.code);
    printf("The salary of employee is : %f\n", e.salary);
    printf("The name of employee is : %s\n", e.name);
}

int main()
{
    // Declaring e1 and pointer.
    struct employee e1;
    struct employee *ptr;

    ptr = &e1; // Pointing ptr to e1.
    //Setting member values for e1.
    ptr->code = 100; // Here "->" is known as arrow operator.
    ptr->salary = 1.2;
    strcpy(ptr->name, "Amit");

    struct employee adi = {22, 299, "Aditya"};

    show(e1);
    show(adi);

    return 0;
}