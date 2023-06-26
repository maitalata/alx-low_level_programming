#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int str_count, i, j;

	str_count = 0;

	while (s[str_count] != '\0')
	{
		str_count++;
	}

	char rev[str_count];

	j = 0;
	for (i = str_count - 1; i >= 0; i--)
	{
		rev[j++] = s[str_count];
	}

	s = rev;

}

