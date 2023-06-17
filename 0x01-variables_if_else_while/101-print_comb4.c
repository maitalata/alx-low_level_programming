#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function prints all combinations of the three digits 0, 1, and 2
 * in ascending order without repeating digits
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
    int digit1, digit2, digit3;
    int firstCombination = 1;

    for (digit1 = 0; digit1 <= 9; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
        {
            for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
            {
                if (firstCombination)
                {
                    firstCombination = 0;
                }
                else
                {
                    putchar(',');
                    putchar(' ');
                }

                putchar(digit1 + '0');
                putchar(digit2 + '0');
                putchar(digit3 + '0');
            }
        }
    }

    putchar('\n');

    return (0);
}


