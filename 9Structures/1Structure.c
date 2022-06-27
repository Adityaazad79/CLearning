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
    int a = 30;
    char b = 'g';
    float d = 234.22;

    struct employee e1; // Here'.' is called member operator. // Creating a structure Variable
    e1.code = 100;
    e1.salary = 199.7;
    //e1.name = "Harry"; // ------> Will not work
    strcpy(e1.name, "Aditya");

    return 0;
}