#include <stdio.h>

/**
 * print_times_table - Print XxX Table
 *
 * @n: How to print the numbers
 */
void print_times_table(int n)
{
    if (n <= 15 && n >= 0)
    {
	int i, j;
        for (i = 0; i <= n; i++)
	{
            for (j = 0; j <= n; j++)
	    {
                printf("%4d", i * j);
            }
            printf("\n");
        }
    }
}
