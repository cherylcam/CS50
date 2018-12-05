#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Variables declaration
    int height;
    {
        //get user input and check for condition
        height = get_int("Height= ");
    }
    while (height < 0 || height > 23);

    //draw the number of rows
    for (int row = 0; row < height; row++)
    {
        {
            //draw the number of columns
            int column;
            for (column = 0; column <= height; column++)
            {
                //print the spaces and hashes for every row & column using if_else statement
                if (column + row < height - 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("#");
                }
            }
        }
        //print a new line
        printf("\n");
    }
}