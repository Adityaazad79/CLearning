#include <stdio.h>

void encrypt(char *str);

void decrypt(char *str);

int main()
{
    char str[20];
    printf("Enter the message to encrypt\n");
    scanf("%[^\n]%*c", str);
    printf("Your message to encrypt is %s\n", str);
    encrypt(str);
    printf("Your message after encryption is %s\n", str);
    decrypt(str);
    printf("Your message after decryption is %s\n", str);
    return 0;
}

void encrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str + 1;
        str++;
    }
}

void decrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str - 1;
        str++;
    }
}