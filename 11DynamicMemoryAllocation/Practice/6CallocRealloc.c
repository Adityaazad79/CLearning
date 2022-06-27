/*
Attempt problem 4 using calloc()
Q4. Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory couldn't be alloclated\n");
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Enter the %d element :\n", i + 1);
            scanf("%d", &ptr[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            printf("Your %d no element is %d\n", i + 1, ptr[i]);
        }

        /* Reallocating memory */
        ptr = realloc(ptr, 10 * sizeof(int));
        if (ptr == NULL)
        {
            printf("Memory couldn't be realloclated\n");
        }
        else
        {
            for (int i = 0; i < 10; i++)
            {
                printf("Enter the %d element :\n", i + 1);
                scanf("%d", &ptr[i]);
            }

            for (int i = 0; i < 10; i++)
            {
                printf("Your %d no element is %d\n", i + 1, ptr[i]);
            }
        }
        free(ptr);
    }

    return 0;
}