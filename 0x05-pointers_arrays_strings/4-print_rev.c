#include "main.h"

/**
 * print_rev - print string in reverse order
 *
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int str_count, i;

	str_count = 0;

	while (s[str_count] != '\0')
	{
		str_count++;
	}

	for (i = str_count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
