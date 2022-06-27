/*
Write problem 5’s structure using typedef keyword.
Q5. Write a program with a structure representing a Complex number.
*/


#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
} C;

int main()
{
    C a = {5, 7};

    printf("%d+%di", a.real, a.img);

    return 0;
}