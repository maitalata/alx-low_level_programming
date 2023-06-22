#include "main.h"

/**
 * _isdigit - Check whether a passed argument is digit
 * @c: The digit to check
 *
 * Return: On success 1.
 * Otherwise, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

