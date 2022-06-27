#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Getcdemo.txt", "r");
    printf("My character is '%C'\n", fgetc(ptr));
    fclose(ptr);

    return 0;
}