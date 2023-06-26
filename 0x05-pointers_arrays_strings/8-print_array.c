#include "main.h"
#include <stdio.h>

/**
 * print_array - main function.
 * @a: Pointer, the array to print.
 * @n: The array lenght.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

