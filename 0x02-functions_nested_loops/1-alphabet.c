#include "main.h"

/**
 * print_alphabet - function to print alphabets
 *
 * This functon print alphabets
 *
 * Return: Always 0 (indicating successful execution)
 */
void print_alphabet(void)
{
	char c;
	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

/**
 * main - Entry point for the program
 *
 * This function print alphabets
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

