/* Write a program with three functions,
1. Good morning function which prints "Good Morning."
2. Good afternoon function which prints "Good Afternoon."
3. Good night function, which prints "Good night."
main() should call all of these in order 1 - 2 - 3. */
// Indirect function Call

#include <stdio.h>
void gm();
void ga();
void gn();

int main()
{
    gm();

    return 0;
}

void gm()
{
    printf("Execution of function Good Morning\nGood Morning\n\n");

    ga();
}

void ga()
{
    printf("Execution of function Good Afternoon\nGood Afternoon\n\n");
    gn();
}

void gn()
{
    printf("Execution of function Good Night\nGood Night\n\n");
}