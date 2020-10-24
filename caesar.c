#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
//Key Checker
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int j = 0; j < strlen(argv[1]); j++)
    {
        if (!isdigit(argv[1][j]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    if (argv[1] == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //Set the key an plaintext
    int k = atoi(argv[1]) % 26;
    if (k < 0)
    {
        printf("Key must be positive.\n");
        return 1;
    }
    string ptext = get_string("plaintext: ");
    //Here we start to cipher the text
    printf("ciphertext: ");
    for (int i = 0; i < strlen(ptext); i++)
    {
        if (!isalpha(ptext[i]))
        {
            printf("%c", ptext[i]);
            continue;
        }
        if (isupper(ptext[i]))
        {
            printf("%c", (ptext[i] - 'A' + k) % 26 + 'A');
        }
        else if (islower(ptext[i]))
        {
            printf("%c", (ptext[i] - 'a' + k) % 26 + 'a');
        }
    }
    printf("\n");
    return 0;
}