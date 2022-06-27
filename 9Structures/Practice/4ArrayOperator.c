/*
Write a program to illustrate the use of an arrow operator -> in C.
*/

#include <stdio.h>
#include <string.h>

typedef struct boys
{
    char name[20];
    int roll;
} B;

int main()
{
    B a;
    B *ptr;
    ptr = &a;
    strcpy(ptr->name, "Aditya");
    ptr->roll = 02;

    B b = {"Amit", 01};

    printf("The name of boy is %s\n", a.name);
    printf("The name of boy is %d\n", a.roll);

    printf("The name of boy is %s\n", b.name);
    printf("The name of boy is %d\n", b.roll);

    return 0;
}