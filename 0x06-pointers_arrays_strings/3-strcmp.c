#include "main.h"

/**
 * _strcmp - function to compare two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if s1 is equal to s2, negative
 * value if s1 is less than s2, positive value if
 * s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}

	return (s1[a] - s2[a]);
}

