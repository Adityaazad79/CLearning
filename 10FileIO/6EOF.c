#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("Sample3.txt", "r");
    c = fgetc(ptr);
    while (1)
    {
        printf("%c", c);
        c = fgetc(ptr);
        if (c == EOF) // EOF stands for End of File. This tells us that you have reached the end of the file.
        {
            break;
        }
    }
    fclose(ptr);

    return 0;
}