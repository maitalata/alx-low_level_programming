#include "main.h"

/**
 * _isLower - Function to check if character is lower
 *
 * @c The character to print
 *
 * Return: Always 0 (indicating successful execution)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
