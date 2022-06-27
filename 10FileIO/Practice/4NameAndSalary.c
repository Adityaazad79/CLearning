/*
Take name and salary of two employees as input from the user and write them to a text file in the following format:
*/

#include <stdio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("Sample5.csv", "w");
    char name[20];
    int salary;
    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name:\n");
        scanf("%s", name);
        fprintf(fptr, "%s, ", name);

        printf("Enter the salary:\n");
        scanf("%d", &salary);
        fprintf(fptr, "%d\n", salary);
    }

    fclose(fptr);
}

// #include <stdio.h>
// #include <string.h>

// typedef struct employee
// {
//     char name[20];
//     int salary;

// } emp;

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("Sample5.txt", "w");
//     emp e[2];
//     // *str[2];
//     for (int i = 0; i < 2; i++)
//     {
//         // int s;
//         // str[i] = &e;
//         // char name[20];
//         // scanf("%[^\n]%*c", name);
//         // // fflush(stdin);
//         // strcpy(str[i]->name, name);
//         // scanf("%d", &s);
//         // str[i]->salary = s;
//         // fprintf(ptr, "%s", e.salary);
//         // fprintf(ptr, "%d", s);

//         char s[20];
//         scanf("%s", &s);
//         strcpy(e[i].name, &s);
//         scanf("%d", &e[i].salary);
//         fprintf(ptr, "%s", e[i].name);
//         fprintf(ptr, "%d", e[i].salary);

//     }

//     return 0;
// }