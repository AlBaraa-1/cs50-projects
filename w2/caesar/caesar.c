#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, length = strlen(plaintext); i < length; i++)
    {
        if (!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
        }

        else
        {
            if (isupper(plaintext[i]))
            {
                char ciphered = ((plaintext[i] - 'A' + key) % 26) + 'A';
                printf("%c", ciphered);
            }
            else
            {
                char ciphered = ((plaintext[i] - 'a' + key) % 26) + 'a';
                printf("%c", ciphered);
            }
        }
    }
    printf("\n");
}

bool only_digits(string s)
{
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
