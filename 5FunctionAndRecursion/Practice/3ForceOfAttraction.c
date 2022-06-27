//  Write a function to calculate the force of attraction on a body of mass m exerted by earth. (g=9.8m/S2)
// Unit of mass = Kg ; Decimal Points = 2

#include <stdio.h>
float force(float m);

int main()
{
    float m;
    float f;
    printf("Enter the mass of the object in kg\n");
    scanf("%f", &m);
    f = force(m);
    printf("The amount of force applied on an object of mass %.2f kg is %.2f kgm/s2\n", m, f);

    return 0;
}

float force(float m)
{
    float f;
    f = m * 9.8;
    return f;
}