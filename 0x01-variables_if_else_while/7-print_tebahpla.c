#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function print alphabets
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

