#include "main.h"
/**
* _strncpy - string copy function
*
* @dest: destination string
* @src: source string
* @n : number of bytes to copy
*
* Return: the strings concatenated together
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

