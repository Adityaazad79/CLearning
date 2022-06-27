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
    struct employee facebook[100]; // An array of structures
    facebook[0].code = 100;        // Structure Variable
    facebook[0].salary = 1.1;
    strcpy(facebook[0].name, "Aditya");

    struct employee Amit = {101, 2.1, "Amit"}; // Structure Variable // Initialisation method

    struct employee Aniket = {0}; // Sets all elements to 0.

    printf("Code : %d\n", Amit.code);
    printf("Salary : %f\n", Amit.salary);
    printf("Name : %s\n", Amit.name);

    printf("Code : %d\n", Aniket.code);
    printf("Salary : %f\n", Aniket.salary);
    printf("Name : %s\n", Aniket.name);

    return 0;
}