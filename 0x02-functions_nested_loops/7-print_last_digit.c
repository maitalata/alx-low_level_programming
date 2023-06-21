#include "main.h"

/**
 * print_last_digit - Function to print last digit of a number
 *
 * @j: The number whose last digit will be printed
 *
 * Return: int the last digit number
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}

