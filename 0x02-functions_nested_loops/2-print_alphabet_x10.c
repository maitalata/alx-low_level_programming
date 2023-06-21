#include "main.h"

/**
 * main - Entry point for the program
 *
 * Print Alphabets 10 TImes
 *
 * Return: Always 0 (indicating successful execution)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

