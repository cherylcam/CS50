#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv [])  //use this main to have a command line argument
{
    if (argc != 2) //allow for 2 arguments only
    {
        printf("Please try with one single command line!\n");
        return 1;
    }

    string k = (argv[1]);
    for (int i = 0; i < strlen(argv [1]); i++)
    {
        if (!isalpha(k[i]))
        {
            printf("Please use only alphabetical!\n");
            return 1;
        }

    }
    string p = get_string("plaintext: "); //prompt user for a plaintext that they want to encrypt
    printf("ciphertext: ");

    //use the below loop to encrypt the plaintext for every character
    int j = 0;
    for (int i = 0; i < strlen(p); i++)
    {
        j = j % strlen(k);
        if (isalpha(p[i]))
        {
            if (islower(p[i]) && islower(k[j]))
            {
                printf("%c", (((p[i] - 97) + (k[j] - 97)) % 26) + 97);
            }
            else if (islower(p[i]) && isupper(k[j]))
            {
                printf("%c", (((p[i] - 97) + (k[j] - 65)) % 26) + 97);
            }
            else if (isupper(p[i]) && islower(k[j]))
            {
                printf("%c", (((p[i] - 65) + (k[j] - 97)) % 26) + 65);
            }
            else if (isupper(p[i]) && isupper(k[j]))
            {
                printf("%c", (((p[i] - 65) + (k[j] - 65)) % 26) + 65);
            }
            j++;
        }
        else //if neither then just print whatever is on the plaintext
        {
            printf("%c", p[i]);
        }
    }
    printf("\n"); //print a new line
    return 0;
}