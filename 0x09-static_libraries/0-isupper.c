#include "main.h"

/**
 * _isupper - Check whether a character is uppercase
 * @c: The character's ASCII code
 *
 * Return: On success 1.
 * Otherwise, 0 is returned.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

