#include <stdio.h>

int main()
{
    char *ptr = "Aditya Bhai"; // Re-initialisation is possible.
    // char ptr[] = "Aditya Bhai"; // Re-initialisation is not possible.
    ptr = "Azad Bhai";
    printf("%s\n", ptr);

    return 0;
}