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
    facebook[1].code = 1100; // Structure Variable
    facebook[1].salary = 11.1;
    strcpy(facebook[1].name, "1Aditya");
    facebook[2].code = 2100; // Structure Variable
    facebook[2].salary = 21.1;
    strcpy(facebook[2].name, "2Aditya");

    struct employee Amit = {101, 2.1, "Amit"}; // Structure Variable // Initialisation method

    struct employee Aniket = {0}; // Sets all elements to 0.

    printf("Code : %d\n", Amit.code);
    printf("Salary : %f\n", Amit.salary);
    printf("Name : %s\n", Amit.name);

    printf("Code : %d\n", Aniket.code);
    printf("Salary : %f\n", Aniket.salary);
    printf("Name : %s\n", Aniket.name);

    printf("Code : %d\n", facebook[0].code);
    printf("Salary : %f\n", facebook[0].salary);
    printf("Name : %s\n", facebook[0].name);

    printf("Code : %d\n", facebook[1].code);
    printf("Salary : %f\n", facebook[1].salary);
    printf("Name : %s\n", facebook[1].name);

    printf("Code : %d\n", facebook[2].code);
    printf("Salary : %f\n", facebook[2].salary);
    printf("Name : %s\n", facebook[2].name);

    return 0;
}