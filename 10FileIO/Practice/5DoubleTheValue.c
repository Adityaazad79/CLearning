/*
Write a program to modify a file containing an integer to double its value.
       If old value = 2, then new file value = 4
*/

// Incomplete... Wrong output
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Sample5.txt", "w"); //  Opening in read mode.
    int num1;
    fscanf(fptr, "%d", &num1);
    printf("The number in the file is %d\n", num1);
    fprintf(fptr, "%d * 2 = %d\n", num1, num1 * 2);
    fclose(fptr);

    return 0;
}