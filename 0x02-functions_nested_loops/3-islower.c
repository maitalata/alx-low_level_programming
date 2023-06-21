#include "main.h"

/**
 * isLower - Entry point for the program
 *
 * This function prints whether a letter is alphabet
 *  
 * Return: Always 0 (indicating successful execution)
 */
int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

