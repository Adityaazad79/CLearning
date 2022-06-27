#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[20];
    char *str2;
    printf("enter string \n"); // **using %c  input**
    scanf("%c", str1);
    str1[1] = '\0'; // add terminating null-charachter
    printf(" string 1  is %s  \n", str1);

    str2 = malloc(102400); // allocate buffer
    if (str2 == NULL)
        return 1; // check if allocation is successful
    printf("enter string 2 \n");
    // pass correct thing
    scanf("%s", str2); //using %s input

    printf(" string 1 and 2 is %c and %s \n", *str1, str2); // pass correct thing for %c
    int a = strcmp(str1, str2);                             //**comparing both**
    printf("%d", a);
    free(str2); // free the allocated buffer
    return 0;
}