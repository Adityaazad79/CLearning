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
    struct employee facebook[100]; // Structure Variable
    facebook[0].code = 100;
    facebook[0].salary = 1.1;
    strcpy(facebook[0].name, "Aditya");

    facebook[1].code = 101;
    facebook[1].salary = 2.1;
    strcpy(facebook[1].name, "Amit");

    facebook[2].code = 102;
    facebook[2].salary = 3.1;
    strcpy(facebook[2].name, "Aniket");

    return 0;
}