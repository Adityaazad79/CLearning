// Unexpected Result

#include <stdio.h>

int main()
{
    char a;
    printf("Enter letter\n");
    scanf("%c", &a);
    if (a == "A" || "B" || "C" || "D" || "E" || "F" || "G" || "H" || "I" || "J" || "K" || "L" || "M" || "N" || "O" || "P" || "Q" || "R" || "S" || "T" || "U" || "V" || "W" || "X" || "Y" || "Z")
    {
        printf("This is a not a lowercase character\n");
    }
    else if (a == "a" || "b" || "c" || "d" || "e" || "f" || "g" || "h" || "i" || "j" || "k" || "l" || "m" || "n" || "o" || "p" || "q" || "r" || "s" || "t" || "u" || "v" || "w" || "x" || "y" || "z")
    {
        printf("This a lowercase character\n");
    }
    else
    {
        printf("Invalid Caharcter");
    }

    return 0;
}