// Structure Paddding

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
    union sample s1;
    printf("%d", sizeof(s1));

    return 0;
}