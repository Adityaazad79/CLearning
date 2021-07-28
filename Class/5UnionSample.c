//

#include <stdio.h>
// #pragma pack(1) // To avoid padding

union sample
{
    char a;
    int b;
    float c;
};

int main()
{
    union sample p;
    p.a = 15;
    printf("%d\n", p.a); // Prints the last value
    p.b = 'q';
    printf("%c\n", p.b);
    p.c = 8.0;
    printf("%f\n", p.c); 
    return 0;
}