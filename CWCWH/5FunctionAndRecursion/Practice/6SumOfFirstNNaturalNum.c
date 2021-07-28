// Write a recursive function to calculate the sum of first n natural numbers.

#include <stdio.h>
int sum(int n); // Function Prototype

int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);                                                 // User Input for thr natural number
    printf("The sum of first %d natural number is %d\n", n, sum(n)); // Function Call

    return 0;
}

int sum(int n) // Function Definition
{
    if (n == 1) // Base Case
        return 1;
    // else // Here else becomes optional
    return n + sum(n - 1); // Recursive Case
}