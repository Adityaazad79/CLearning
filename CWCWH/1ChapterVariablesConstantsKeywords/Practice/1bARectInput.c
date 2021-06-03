// Write a c program to calculate the area of a rectangle: b) using inputs supplied by the user

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the length of the rectangle\n");
    scanf("%d", &a);
    printf("Enter the breadth of the rectange \n");
    scanf("%d", &b);
    printf("The area of the rectange is %d \n", a * b);

    return 0;
}