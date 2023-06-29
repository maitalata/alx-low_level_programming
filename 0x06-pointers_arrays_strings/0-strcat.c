#include "main.h"

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
		if (src[i] != '\0')
		{
			dest[dest_length] = '\0';
		}

		dest[dest_length++] = src[i++];
	}

	return dest;
}
