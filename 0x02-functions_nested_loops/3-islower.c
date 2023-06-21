#include "main.h"

/**
 * _isLower - Entry point for the program
 *
 * This function prints whether a character is lower
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
