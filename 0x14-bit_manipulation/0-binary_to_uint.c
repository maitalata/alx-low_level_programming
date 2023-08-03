#include "main.h"

/**
 * binary_to_uint - convert a binary number
 * to an unsigned integer.
 *
 * @b: string reprenting the binary number
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	result = 0;
	i = 0;

	if (!b)
		return 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result = result | (b[i] - '0');
			i++;
		}
		else
		{
			return 0;
		}
	}

	return result;
}
