#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the program
 *
 * This function prints if number is greater than 5, 
 * or zero or less than 6
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int listDigit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	}
	else if (n > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}
	else
	{
		printf("Last Digit of %d is %d and is 0", n, lastDigit);
	}

	return (0);
}
