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
	int a = '0';


	while (a <= '9')
	{
		putchar(a);
		if (a == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			a++;
		}
	}
	
	return (0);
}

