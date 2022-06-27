/*
Modify the program above to check whether the file exists or not before opening the file.
*/

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Sample.txt", "r");
    // Reading a file returns NULL if the file doesn't exists.
    if (ptr != NULL)
    {
        printf("The file exists.\n");
    }

    ptr = fopen("Sample2.txt", "r");
    if (ptr == NULL)
    {
        printf("The file doesn't exist\n");
    }
    else
    {
        int num1, num2;
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The 1st number in the file is %d\n", num1);
        printf("The 2nd number in the file is %d\n", num2);
    }

    return 0;
}