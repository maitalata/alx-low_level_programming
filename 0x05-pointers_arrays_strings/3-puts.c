#include "main.h"

/**
 * _puts - print a given string
 *
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}

	_putchar('\n');
}

