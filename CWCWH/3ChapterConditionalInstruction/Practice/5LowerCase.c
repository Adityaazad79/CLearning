// Unexpected Result

#include <stdio.h>

int main()
{
    char a;
    printf("Enter letter\n");
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
    {
        printf("This is a lowercase character\n");
    }
    else if (a >= 65 && a <= 90)
    {
        printf("This is not a lowercase character\n");
    }
    else
    {
        printf("Invalid Character\n");
    }

    return 0;
}