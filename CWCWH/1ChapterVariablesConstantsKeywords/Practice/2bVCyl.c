// Volume of Cylinder using radius & height user input

#include <stdio.h>

int main()
{
    float r;
    printf("What is the radius of the circle? \n");
    scanf("%f", &r);
    printf("The area of the circle is %f \n", 22 * r * r / 7);

    float h;
    printf("What is the height of the cylinder? \n");
    scanf("%f", &h);
    printf("The volume of the cylinder is %f", 22 * r * r *h / 7);

    return 0;
}