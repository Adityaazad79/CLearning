#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Sample2.txt", "r"); //  Opening in read mode.
    int num1, num2;
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    // fclose(ptr); // We can als close the file here as we have finished all the operations here.
    printf("The 1st number in the file is %d\n", num1);
    printf("The 2nd number in the file is %d\n", num2);
    fclose(ptr);

    return 0;
}