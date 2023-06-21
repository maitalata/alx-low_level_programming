#include "main.h"

/**
 * _islower - Function to check if character is lower
 *
 * @c The character to print
 *
 * Return: int number indicating success or otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
