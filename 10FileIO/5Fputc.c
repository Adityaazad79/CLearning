#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Putcdemo.txt", "w");
    fputc('A', ptr); // This will append the charcater 'A' to the file.
    fputc('d', ptr); // This will append the charcater 'd' to the file.
    fputc('i', ptr); // This will append the charcater 'i' to the file.
    fputc('t', ptr); // This will append the charcater 't' to the file.
    fputc('y', ptr); // This will append the charcater 'y' to the file.
    fputc('a', ptr); // This will append the charcater 'a' to the file.
    // We can also use fprintf.
    fclose(ptr);
    return 0;
}