#include <stdio.h>

/**
 * reverse_array - reverse contents of integer array
 * @a: integer array
 * @n: the number of array element in e
 */
void reverse_array(int *a, int n)
{

	int b = 0, c = 0;
	int d[20];

	n--;
	while (b <= n)
	{
		d[n - b] = a[b];
		b++;

	}
	while (c <= n)
	{
		a[c] = d[c];
		c++;
	}
}

