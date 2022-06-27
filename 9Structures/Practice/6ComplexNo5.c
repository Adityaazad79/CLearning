/*
Create an array of 5 complex numbers created in problem 5 and display them with the help of a display function.
The values must be taken as an input from the user.
*/

#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
} C;

void display(C a)
{
    printf("The complex no is %d+%di\n", a.real, a.img);
}

int main()
{
    C a = {1, 2};
    C b = {3, 4};
    C c = {5, 6};
    C d = {7, 8};
    C e = {9, 5};

    display(a);
    display(b);
    display(c);
    display(d);
    display(e);

    return 0;
}