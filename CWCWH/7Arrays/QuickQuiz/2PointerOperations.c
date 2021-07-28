#include <stdio.h>

int main()
{
    int i = 5;
    int *iptr = &i;
    printf("The value of iptr is %u\n", iptr);
    iptr++; // Increments of the value of ptr by 4... By 4 bytes... 1 integer size = 4 byte
    printf("The value of iptr is %u\n", iptr);
    iptr--; // Decrements of the value of ptr by 4
    printf("The value of iptr is %u\n\n", iptr);

    char j = 10;
    char *cptr = &j;
    printf("The value of jptr is %u\n", cptr);
    cptr++; // Increments of the value of ptr by 1... By 1 bytes... 1 character size = 1 byte
    printf("The value of jptr is %u\n", cptr);
    cptr--; // Decrements of the value of ptr by 1
    printf("The value of jptr is %u\n\n", cptr);

    float k = 15;
    float *fptr = &k;
    printf("The value of fptr is %u\n", fptr);
    fptr++; // Increments of the value of ptr by 4... By 4 bytes... 1 float size = 4 byte
    printf("The value of fptr is %u\n", fptr);
    fptr--; // Decrements of the value of ptr by 4
    printf("The value of fptr is %u\n\n", fptr);

    int x=2;
    int *ptr = &x;

    printf("The value of ptr is %u\n", ptr);
    printf("Subtraction of iptr-ptr is %d\n", iptr - ptr);
    printf("Subtraction of iptr-ptr is %u\n", iptr - ptr);
    printf("Subtraction of iptr-x is %d\n", iptr - x);
    printf("Subtraction of iptr-x is %u\n", iptr - x);

    // printf("Subtraction of iptr-cptr is %d\n", iptr - cptr); // No operation between interger array and character array

    return 0;
}