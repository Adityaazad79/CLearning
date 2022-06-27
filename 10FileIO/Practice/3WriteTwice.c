/*
Write a program to read a text file character by character and write its content twice in a separate file.
*/

#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    ptr1 = fopen("Sample3.txt", "r");
    ptr2 = fopen("Sample4.txt", "w");
    char c;
    c = fgetc(ptr1);
    while (c != EOF)
    {
        // fprintf(ptr2, "%c", c);// We can also use it insted of fputc.
        // fprintf(ptr2, "%c", c);
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}