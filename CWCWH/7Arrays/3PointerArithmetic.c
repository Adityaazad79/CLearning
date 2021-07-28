#include <stdio.h>

int main()
{
    int i;
    int *iptr = &i;
    printf("The value of iptr is %u\n", iptr);
    iptr++; // Increments of the value of ptr by 4... By 4 bytes... 1 integer size = 4 byte
    printf("The value of iptr is %u\n", iptr);
    iptr--; // Decrements of the value of ptr by 4
    printf("The value of iptr is %u\n\n", iptr);

    char j;
    char *cptr = &j;
    printf("The value of jptr is %u\n", cptr);
    cptr++; // Increments of the value of ptr by 1... By 1 bytes... 1 character size = 1 byte
    printf("The value of jptr is %u\n", cptr);
    cptr--; // Decrements of the value of ptr by 1
    printf("The value of jptr is %u\n\n", cptr);

    float k;
    float *fptr = &k;
    printf("The value of fptr is %u\n", fptr);
    fptr++; // Increments of the value of ptr by 4... By 4 bytes... 1 float size = 4 byte
    printf("The value of fptr is %u\n", fptr);
    fptr--; // Decrements of the value of ptr by 4
    printf("The value of fptr is %u\n\n", fptr);

    return 0;
}