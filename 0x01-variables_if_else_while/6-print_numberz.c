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
	int letter;

	for (letter = 48; letter <= 57; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

