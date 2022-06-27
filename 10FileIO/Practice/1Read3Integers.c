/*
Write a program to read three integers from a file.
*/

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Sample1.txt", "r");
    int n1, n2, n3;
    fscanf(ptr, "%d%d%d", &n1, &n2, &n3);
    printf("The three numbers are %d, %d and %d.\n", n1, n2, n3);
    fclose(ptr);

    return 0;
}