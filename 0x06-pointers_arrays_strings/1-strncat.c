#include "main.h"

/**
* *_strncpy - concatenate two strings
* @dest : destination string
* @src : source string
* @n : number of bytes to copy from sr
* Return: the concatenated string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

