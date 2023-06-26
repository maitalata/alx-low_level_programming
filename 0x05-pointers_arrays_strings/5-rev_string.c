#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int str_count = 0;
	char *start = s;
	char *end = s;


	while (*end != '\0')
	{
		end++;
		str_count++;
	}
	
	end--;
	
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

