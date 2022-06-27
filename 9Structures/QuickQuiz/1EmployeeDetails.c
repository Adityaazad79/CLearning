/*
Write a program to store the details of 3 employees from user-defined data. Use the structure declared
above.
*/

#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;

    printf("Enter the code for employee e1 : ");
    scanf("%d", &e1.code);
    printf("Enter the salary of employee e1 : ");
    scanf("%f", &e1.salary);
    printf("Enter the name of employee e1 : ");
    scanf("%s", e1.name);

    printf("Enter the code for employee e2 : ");
    scanf("%d", &e2.code);
    printf("Enter the salary of employee e2 : ");
    scanf("%f", &e2.salary);
    printf("Enter the name of employee e2 : ");
    scanf("%s", e2.name);

    printf("Enter the code for employee e3 : ");
    scanf("%d", &e3.code);
    printf("Enter the salary of employee e3 : ");
    scanf("%f", &e3.salary);
    printf("Enter the name of employee e3 : ");
    scanf("%s", e3.name);

    return 0;
}