/* You are given two strings as input. Strings may be consisted of some spaces. Your task is given below.
    1. find the length of the two strings.
    2. concatenate the two strings and print the concatenated sting along with its length. When you
print the concatenated string the letters in that string should be in uppercase. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void output(char *str1, char *str2);

int main(void)
{
    char *str1, *str2;

    str1 = (char *)malloc(100 * sizeof(char)); //dyanamically allocation
    str2 = (char *)malloc(100 * sizeof(char)); //dyanamically allocation

    /* Input two strings from user */
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);

    output(str1, str2);

    return 0;
}

void output(char *str1, char *str2)
{
    int i, j, a, k; /* Variable Declaration */

    /*Printing the length of the first string*/
    for (i = 0; str1[i] != '\0'; ++i)
    {
        i;
    }
    printf("%d\n", i);

    /*Printing the length of the second string*/
    for (k = 0; str2[k] != '\0'; ++k)
    {
        k;
    }
    printf("%d\n", k);

    /* Move till the end of str1 */
    i = -1;
    while (str1[++i])
        ;

    /* Copy str2 to str1 */
    j = 0;
    while (str1[i++] = str2[j++])
        ;
    printf("%s\n", str1);

    /*Printing the length of the concatinated string*/
    for (i = 0; str1[i] != '\0'; ++i)
    {
        i;
    }
    printf("%d\n", i);
}