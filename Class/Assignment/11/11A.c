/* A set of numbers is provided to the students. Monk asked them to check whether there any sub list
exists with two constraints:
    1. size of list should be at least 2.
    2. sum of its elements provides a palindrome number.
Your task is to help Monk if any sub list exits with above two constraints, then print "yes", otherwise print "no".
In the input section a list of elements given where each element is separated by a space.
In the output section print "yes" if sub list exits otherwise print "no".
For your better understanding, consider
    10 6 7 9 13
    (6+7+9) is 22 which is palindrome therefore print "yes" */

#include <stdio.h>
#include <stdlib.h>

/* function to check whether the sum of the array or the subarray elements are palindrome or not */
int cp(int s); /* Function Protoype */

int main() /* Driver Code */
{
    int i, k = 0, a[10], s = 0, j, r = 0;
    char c;
    while (1)
    {
        scanf("%d%c", &a[k++], &c);
        if (c == '\n')
            break;
    }
    /* Satisfying the first content */
    if (k < 2)
    {
        /* If the length of the array or the subarray is less than 2 we exit form our program */
        printf("no");
        exit(0);
    }
    for (i = 0; i < k; i++)
    {
        /* calculating the sum of the array elements */
        s = s + a[i];
        for (j = i + 1; j < k; j++)
        {
            /* calculating the sum of the subarray elements */
            s = s + a[j];
            r = cp(s); /* Function Declaration */
            if (r == 1)
            {
                printf("yes");
                exit(0);
            }
        }
        s = 0;
    }
    if (r == 0)
    {
        printf("no");
    }
    return 0;
}

int cp(int s) /* Function Definition */
{
    int n, r = 0;
    n = s;
    while (n > 0)
    {
        /* Algorithm for palindrome check */
        r = (r * 10) + (n % 10);
        n /= 10;
    }
    if (s == r)
    {
        return 1;
    }
    return 0;
}