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

    int k = atoi(argv[1]); //convert the 'key' to an int since it starts as a string
    if (k < 0)  //allow only non-negative integers
    {
        printf("Please use a positive integer!\n");
        return 1;
    }
    else
    {
        string p = get_string("plaintext: "); //prompt user for a plaintext that they want to encrypt
        printf("Cyphertext: ");
        //use the below loop to encrypt the plaintext for every character
        for (int i = 0, n = strlen(p); i < n; i++)
        {
            if (isupper(p[i])) //check if the character is uppercase
            {
                printf("%c", (((p[i] + k) - 65) % 26) + 65);
            }
            else if (islower(p[i])) //check if the character is lowercase
            {
                printf("%c", (((p[i] + k) - 97) % 26) + 97);
            }
            else //if neither then just print whatever is on the plaintext
            {
                printf("%c", p[i]);
            }
        }
    }
    printf("\n"); //print a new line
    return 0;
}