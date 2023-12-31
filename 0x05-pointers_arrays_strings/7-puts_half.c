#include "main.h"

/**
 * puts_half - main function.
 * @str: Pointer, the string of numbers to print.
 */
void puts_half(char *str)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while (str[n])
	{
		n++;
	}

	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i = n - i;
	}
	else
	{
		i = n / 2;
	}

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

