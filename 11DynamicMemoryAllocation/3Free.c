#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory couldn't be alloclated\n");
    }

    /* Free-ing the alloccated memory */
    
    free(ptr);

    return 0;
}