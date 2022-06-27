#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr=fopen("Sample.txt","w"); // To open the file in write mode.
    ptr=fopen("Sample.txt","r"); // To open the file in read mode.

    return 0;
}