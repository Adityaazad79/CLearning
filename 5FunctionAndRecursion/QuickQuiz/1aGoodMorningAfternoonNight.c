/* Write a program with three functions,
1. Good morning function which prints "Good Morning."
2. Good afternoon function which prints "Good Afternoon."
3. Good night function, which prints "Good night."
main() should call all of these in order 1 - 2 - 3. */
// Direct function Call

#include <stdio.h> 
void gm();
void ga();
void gn();

int main()
{
    printf("Execution of function Good Morning\n");
    gm();
    printf("Execution of function Good Afternoon\n");
    ga();
    printf("Execution of function Good Night\n");
    gn();

    return 0;
}

void gm()
{
    printf("Good Morning\n\n");
}

void ga()
{
    printf("Good Afternoon\n\n");
}

void gn()
{
    printf("Good Night\n\n");
}