#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function print alphabets
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			for (digit3 = 0; digit3 <= 9; digit3++)
			{
				if (digit1 != digit2 && digit2 != digit3 && digit1 != digit3)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(digit3 + '0');

					if (!(digit1 == 2 && digit2 == 1 && digit3 == 0))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

