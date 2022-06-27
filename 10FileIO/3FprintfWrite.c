#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Generated.txt", "w");
    int num = 456;
    fprintf(ptr, "The number is %d\n", num);
    fprintf(ptr, "Thanks for using fprintf\n");
    fclose(ptr);

    return 0;
}