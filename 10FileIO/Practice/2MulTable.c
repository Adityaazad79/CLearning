/*
Write a program to generate a multiplication table of a given number in text format. Make sure that the file is
readable and well-formatted.
*/

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Sample2.txt", "w");
    int num;
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);

    return 0;
}