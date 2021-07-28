#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter your name \n");
    scanf("%[^\n]%*c", str); // User input value of 'str' as multi-word.
    printf("Your  name is %s\n", str);

    return 0;
}