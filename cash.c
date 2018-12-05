#include <stdio.h>
#include <cs50.h>
#include <math.h> //using math library for 'round'function

int main(void)
{
    float dollars; //take input for the amount of cash owed
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    //convert float to int and round it
    int cents = round(dollars * 100);

    int coins = 0; //initialization for coins (start from zero)
    while (cents >= 25) //number of 25 cents coin
    {
        cents = cents - 25;
        coins++;
    }

    while (cents >= 10) //number of 10 cents coin
    {
        cents = cents - 10;
        coins++;
    }

    while (cents >= 5) // number of 5 cents coin
    {
        cents = cents - 5;
        coins++;
    }

    while (cents >= 1) //number of 1 cent coin
    {
        cents = cents - 1;
        coins++;
    }
    printf("number of coins:%i", coins);
    printf("\n");
}
