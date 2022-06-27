/*
Create a structure representing a bank account of a customer. What fields did you use and why?
*/

#include <stdio.h>

typedef struct BankAccoount
{
    char Name[20];
    int AccountNo;
    int AccountYear;
    int Balance;

} Bank;

void display(Bank a)
{
    printf("The account no is %d.\n", a.AccountNo);
    printf("The account holder name is %s.\n", a.Name);
    printf("The account opening year is %d.\n", a.AccountYear);
    printf("The available balance is %dINR only.\n", a.Balance);
}

int main()
{
    Bank a = {"Aditya", 12345, 2015, 12645};

    display(a);

    return 0;
}