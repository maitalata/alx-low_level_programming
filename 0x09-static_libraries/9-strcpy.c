#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - main function.
 *
 * @src: The source.
 * @dest: The destination.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
