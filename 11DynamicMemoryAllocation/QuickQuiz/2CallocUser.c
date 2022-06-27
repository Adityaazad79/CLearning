/*
Write a program to create an array of size n using calloc() where n is an integer entered by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    printf("Enter the no of elements which you want to enter :\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory couldn't be alloclated");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter the %d element :\n", i + 1);
            scanf("%d", &ptr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("Your %d no element is %d\n", i + 1, ptr[i]);
        }
        free(ptr);
    }

    return 0;
}