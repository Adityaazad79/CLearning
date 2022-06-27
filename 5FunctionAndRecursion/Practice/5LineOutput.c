//What will the following line produce in a C program: printf(“%d %d %d\n”,a,++a,a++);

/* Ans - If a = 1;
Output - '3 3 1
' */

// Order of passed arguments.

#include <stdio.h>

int main()
{
    int a = 1;
    printf("%d %d %d\n", a, ++a, a++);
    printf("Now the value of a = %d\n", a);
    printf("%d %d %d\n", ++a, a++, a);

    return 0;
}