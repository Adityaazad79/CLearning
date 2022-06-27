 // a++/++a means (a+1): a--/--a means (a-1).
/*a++ = first print then increment
++a = first increament then print 
This follows same for all the operators
a+=10 means 'Increase the value of a by 10'
*/ 

#include <stdio.h> 

int main()
{
    int a=4;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", a++);
    /* In the upper case the value printed for
    a has not changed as 'a++' has been used
    however the next value of a will be printed as 'a+1'. */

    printf("The value of a++ is %d\n", a);
    printf("The value of ++a is %d\n", ++a);
    /* In this upper case the value of 'a' has changed as '++a' has been used. */

    printf("The value of a is %d\n", a);

    a+=10; // Increases the value of a by 10
    printf("The value of a+=10 is %d\n", a);

    a*=3; // Multiplies the value of a by 3
    printf("The value of a*=3 is %d\n", a);

    a%=5; // Divides the value of a by 5 to assign new value of a as remainder
    printf("The valur of a%=5 is %d\n", a);

    return 0;
}