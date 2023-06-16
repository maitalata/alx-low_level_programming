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

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

