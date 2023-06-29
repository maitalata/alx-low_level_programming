#include "main.h"

/**
 * string_toupper - function to change all lower-case
 * characters in a string array to upper-case
 *
 * @s: string to work on
 *
 * Return: all upper-case string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

