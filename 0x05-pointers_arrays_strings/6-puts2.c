#include "main.h"

/**
 * puts2 - main function.
 * @str: Pointer, the string to print.
 */
void puts2(char *str)
{
	int i;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
