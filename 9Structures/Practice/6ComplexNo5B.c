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

void display(C a, int n)
{
    printf("The complex %d no is %d+%di\n", n + 1, a.real, a.img);
}

int main()
{
    C num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of the complex no %d\n", i + 1);
        scanf("%d", &num[i].real);

        printf("Enter the imaginary part of the complex no %d\n", i + 1);
        scanf("%d", &num[i].img);
    }

    for (int i = 0; i < 5; i++)
    {
        display(num[i], i);
    }

    return 0;
}