#include <stdio.h>

typedef struct complex
{
    int a;
    float b;
} c;
int main()
{
   
    c e[3];
    int choice;
    scanf("%d %f %d %f %d", &e[0].a, &e[0].b, &e[1].a, &e[1].b, &choice);
    switch (choice)
    {
    case 1:
       
        e[2].a = e[0].a - e[1].a;
        e[2].b = e[0].b - e[1].b;
        if (e[2].b > 0)
        {
            printf("%d + i%.2f", e[2].a, e[2].b);
        }
        else
        {
            printf("%d + (i%.2f)", e[2].a, e[2].b);
        }
        break;
    case 2:
        
        e[2].a = (e[0].a * e[1].a) - (e[0].b * e[1].b);
        e[2].b = (e[0].a * e[1].b) + (e[1].a * e[0].b);
        if (e[2].b > 0)
        {
            printf("%d + i%.2f", e[2].a, e[2].b);
        }
        else
        {
            printf("%d + (i%.2f)", e[2].a, e[2].b);
        }
        break;
    }
    return 0;
}