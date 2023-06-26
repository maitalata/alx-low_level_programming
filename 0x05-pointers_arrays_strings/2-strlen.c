#include "main.h"

/**
 * _strlen - function to determine the
 * length of a string
 *
 * @s: the string to act upon
 *
 * Return: integer length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

