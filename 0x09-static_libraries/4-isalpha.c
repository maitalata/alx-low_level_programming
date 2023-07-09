#include "main.h"

/**
 * _isalpha - Function to check if character is lower
 * or alphabet
 *
 * @c: The character to print
 *
 * Return: int number indicating success or otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
