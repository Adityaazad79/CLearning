/*
Write a structure capable of storing date. Write a function to compare those dates
*/

#include <stdio.h>

typedef struct Date
{
    int date;
    int month;
    int year;
} date;

int compare(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return 2;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return 2;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return 2;
    }

    else
    {
        return 0;
    }
}

int main()
{
    date d1, d2;
    printf("Enter the date\n");
    scanf("%d", &d1.date);
    printf("Enter the month\n");
    scanf("%d", &d1.month);
    printf("Enter the year\n");
    scanf("%d", &d1.year);
    printf("Enter the date to compare\n");
    scanf("%d", &d2.date);
    printf("Enter the month to compare\n");
    scanf("%d", &d2.month);
    printf("Enter the year to compare\n");
    scanf("%d", &d2.year);

    int n = compare(d1, d2);
    if (n == 1)
    {
        printf("The date %d/%d/%d is earlier than the date %d/%d/%d.\n", d1.date, d1.month, d1.year, d2.date, d2.month, d2.year);
    }
    if (n == 2)
    {
        printf("The date %d/%d/%d is earlier than the date %d/%d/%d.\n", d2.date, d2.month, d2.year, d1.date, d1.month, d1.year);
    }
    else
    {
        printf("Both dates are the same.\n");
    }

    return 0;
}