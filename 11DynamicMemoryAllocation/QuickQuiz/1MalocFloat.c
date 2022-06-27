/*
Write a program to create a dynamic array of 5 floats using malloc()
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    if (ptr == NULL)
    {
        printf("Memory couldn't be alloclated");
    }
    free(ptr);

    return 0;
}