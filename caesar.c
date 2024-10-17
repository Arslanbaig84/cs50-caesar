#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Ensuring customer types command line argument
    if (argc != 2)
    {
        printf("Need to insert key at file execution.\n");
        return 1;
    }

    else
    {
        string s = argv[1];
        for (int i = 0;  i < strlen(s); i++)
        {
            if (isalpha(s[i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        int key = atoi(s);
        //printf("%i", key);

        string pt = get_string("Plain Text: ");
        //printf("plaintext:  %s", pt);

        // Function to encrypt text
        for (int i = 0;  i < strlen(pt); i++)
        {
            if (isupper(pt[i]))
            {
                pt[i] = pt[i] - 65;
                pt[i] = (pt[i] + key) % 26;
                pt[i] = pt[i] + 65;
            }
            if (islower(pt[i]))
            {
                pt[i] = pt[i] - 97;
                pt[i] = (pt[i] + key) % 26;
                pt[i] = pt[i] + 97;
            }
        }
        printf("ciphertext: %s", pt);
        printf("\n");
        return 0;
    }
}