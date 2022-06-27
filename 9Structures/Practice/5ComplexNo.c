/*
Write a program with a structure representing a Complex number.
*/

#include <stdio.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex a = {5, 7};

    printf("%d+%di", a.real, a.img);

    return 0;
}