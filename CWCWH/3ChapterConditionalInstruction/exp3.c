/* Write a program to find out whether a student is pass or fail; if it requires a
total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take
marks as an input from the user */

#include <stdio.h>

int main()
{
    int a, b, c, p, x;

    // a,b,c are the subject marks. p is full marks. x is percent of the total marks gained in the exam

    printf("Enter the full marks for a subject\n");
    scanf("%d", &p);

    printf("Pls enter your marks for Subject 1, Subject 2 and Subject 3 respectively\n");
    scanf("%d", &a);

    switch (a < 1 || a > p)
    {
    case 1:
        printf("Invalid Input");

        scanf("%d", &b);
    }
    switch (b < 1 || b > p)
    {
    case 1:
        printf("Invalid Input");

        scanf("%d", &c);
    }
    switch (c < 1 || c > p)
    {
    case 1:
        printf("Invalid Input");

        x = (a + b + c) * 100 / p / 3;
        a = a * 100 / p;
        b = b * 100 / p;
        c = c * 100 / p;

        if (a > 100 || b > 100 || c > 100 || x > 100)

        {
            printf("Invalid Input");
        }

        else if (a >= 33 && b >= 33 && c >= 33 && x >= 40)
        {
            printf("Congratulations you have qualified the exam!\n");
        }
        else
        {
            printf("You could not qualify the exam\n");
        }

        return 0;
    }
}

// switch (expression)
// {
// case /* constant-expression */:
//     /* code */
//     break;

// default:
//     break;
// }