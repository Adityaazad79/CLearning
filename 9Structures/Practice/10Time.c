/*
Solve problem 9 for time using typedef keyword.
Q9. Write a structure capable of storing date. Write a function to compare those dates
*/

#include <stdio.h>

typedef struct Date
{
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int second;
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

    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return 2;
    }

    if (d1.minute > d2.minute)
    {
        return 1;
    }
    if (d1.minute < d2.minute)
    {
        return 2;
    }

    if (d1.second > d2.second)
    {
        return 1;
    }
    if (d1.second < d2.second)
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
    printf("Enter the hour\n");
    scanf("%d", &d1.hour);
    printf("Enter the minute\n");
    scanf("%d", &d1.minute);
    printf("Enter the second\n");
    scanf("%d", &d1.second);

    printf("Enter the date to compare\n");
    scanf("%d", &d2.date);
    printf("Enter the month to compare\n");
    scanf("%d", &d2.month);
    printf("Enter the year to compare\n");
    scanf("%d", &d2.year);
    printf("Enter the hour to compare\n");
    scanf("%d", &d2.hour);
    printf("Enter the minute to compare\n");
    scanf("%d", &d2.minute);
    printf("Enter the second to compare\n");
    scanf("%d", &d2.second);

    int n = compare(d1, d2);
    if (n == 1)
    {
        printf("The timestamp %d-%d-%d %d:%d:%d is earlier than the timestamp %d-%d-%d %d:%d:%d.\n", d1.year, d1.month, d1.date, d1.hour, d1.minute, d1.second, d2.year, d2.month, d2.date, d2.hour, d2.minute, d2.second);
    }
    else if (n == 2)
    {
        printf("The timestamp %d-%d-%d %d:%d:%d is earlier than the timestamp %d-%d-%d %d:%d:%d.\n", d2.year, d2.month, d2.date, d2.hour, d2.minute, d2.second, d1.year, d1.month, d1.date, d1.hour, d1.minute, d1.second);
    }
    else
    {
        printf("Both dates are the same.\n");
    }

    return 0;
}