#include <stdio.h>
#include <string.h> // Header file for 'strcmp' function.

int main()
{
    char str[20] = "Aditya";
    char str2[20] = "Azad";
    int cmp = strcmp(str, str2);
    /* Compares first string with with second one.
    Gives value 0 if both strings are equal.
    Gives difference of ASCII value, negative, if ASCII value of 2nd string is greater.
    Gives difference of ASCII value, positive, if ASCII value of 1st string is greater.
    This is compiler dependent */

    printf("%d\n", cmp);
    return 0;
}

// Optput = '-22' ASCII value of z - ASCII value of d = 22