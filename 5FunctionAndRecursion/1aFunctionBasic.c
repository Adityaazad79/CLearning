// Function Use Basic

#include <stdio.h>
void display(); // Function Prototype

int main()
{
    int a;
    printf("Initialising Display Function\n");
    display(); // Function Call
    printf("Finished Display Function\n");

    return 0;
}

void display() // Function Definition
{
    printf("Hi, I am display\n");
}