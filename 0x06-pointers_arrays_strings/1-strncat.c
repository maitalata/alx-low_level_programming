#include "main.h"

/**
 * _strncat - concatenate two strings
 * together up to n bytes from src
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: the two strings concatenated
 * together
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length;
	int i;

	dest_length = 0;
	i = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for(i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[dest_length++] = src[i];
	}

	dest[dest_length] = '\0';

	return (dest);
}

