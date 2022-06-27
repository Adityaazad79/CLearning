/*
Create an array of the multiplication table of 7 up to 10 (7x10=70). Use realloc to make it store 15 numbers(from
7x1 to 7x15).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory couldn't be alloclated\n");
    }
    else
    {
        printf("Memory allocation successful\n");
        for (int i = 0; i < 10; i++)
        {
            ptr[i] = (i + 1) * 7;
        }
        for (int i = 0; i < 10; i++)
        {
            printf("7 X %d = %d\n", i + 1, ptr[i]);
        }
        printf("********************************\n");
        /* Reallocating memory */
        ptr = realloc(ptr, 15 * sizeof(int));
        if (ptr == NULL)
        {
            printf("Memory couldn't be realloclated\n");
        }
        else
        {
            printf("Memory reallocation successful\n");
            for (int i = 0; i < 15; i++)
            {
                ptr[i] = (i + 1) * 7;
            }
            for (int i = 0; i < 15; i++)
            {
                printf("7 X %d = %d\n", i + 1, ptr[i]);
            }
        }
        free(ptr);
    }

    return 0;
}