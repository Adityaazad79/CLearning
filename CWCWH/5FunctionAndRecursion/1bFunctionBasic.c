#include <stdio.h>
int sum(int a, int b); // Function Prototype

int main()
{
    // printf("The valur of sum of %d and %d is ", 5, 3);
    int a, b, c;
    printf("Enter the two numbers to be added\n\n");
    scanf("%d%d", &a, &b);
    c = sum(a, b); // Function Call
    printf("\nThe value of the sum of %d and %d is %d\n", a, b, c);

    return 0;
}

int sum(int a, int b) // Function Definition
{
    int add; // The variables of Function Definition are defined differently from int main() function.
    add = a + b;
    return add;
}