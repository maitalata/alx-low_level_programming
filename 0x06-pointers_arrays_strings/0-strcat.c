#include "main.h"

/**
 * _strcat - concatenate two strings together
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: the two strings concatenated
 * together
 */
char *_strcat(char *dest, char *src)
{
	int dest_length, i;

	dest_length = 0;
	i = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (1)
	{
		if (src[i] == '\0')
		{
			dest[dest_length] = '\0';
			break;
		}

		dest[dest_length++] = src[i++];
	}

	return dest;
}

