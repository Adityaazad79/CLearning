#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter your name \n");
    gets(str); // User input value of 'str' as multi-word.
    printf("Your  name is %s\n", str);
    puts(str); // Prints the value of 'str'.

    return 0;
}