// Find Simple Interest

#include <stdio.h>

int main()
{
    int p, t, r;
    printf("Enter the principle amount \n");
    scanf("%d", &p);
    printf("Enter the time \n");
    scanf("%d", &t);
    printf("Enter the rate of interest \n");
    scanf("%d", &r);
    // printf("", p);
    // printf(", ", t);
    printf(" The interest of the amount %d in %d year(s) at an interest of %d percent per annum is %d \n", p, t, r, p*t*r/100);
    // printf(" ", );
    
    return 0;
}