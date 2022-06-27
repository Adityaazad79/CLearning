/* Try problem 3 using call by value and verify that it doesn’t change the value of the said variable.
Q3. Write a program to change the value of a variable to ten times its current value. Write a function and pass the value
by reference. */

#include <stdio.h>

int m10(int n);

int main()
{
    int n, x;
    printf("Enter the number\n");
    scanf("%d", &n);
    
    printf("Ten time of the value %d is %d\n", n, m10(n));
    printf("The value of n after call by value is %d (Unchanged)\n",n);

    return 0;
}

int m10(int n)
{
    int m;
    m=n;
    n = m * 10;
    return n;
}