/*
Write a program to demonstrate the usage of free() with malloc().
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory couldn't be alloclated\n");
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {
            printf("Enter the %d element :\n", i + 1);
            scanf("%d", &ptr[i]);
        }

        for (int i = 0; i < 6; i++)
        {
            printf("Your %d no element is %d\n", i + 1, ptr[i]);
        }
        free(ptr);
    }

    return 0;
}