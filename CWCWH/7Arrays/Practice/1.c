#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = arr;
    // printf("%u\n", ptr);
    ptr = ptr + 2;
    // printf("%u %u\n", ptr, &arr[2]);
    if (ptr == &arr[2])
    {
        printf("ptr and &ptr[2] point to the same memory location\n");
    }
    else
    {
        printf("ptr and &ptr[2] don't point to the same memory location\n");
    }

    return 0;
}