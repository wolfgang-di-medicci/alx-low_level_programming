#include "main.h"

/**
 * binary_to_uint - changes binary into unsigned int
 * @b: string input
 * Return: decimal number, if given null or character, 0
*/

unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	int c = 0;
	int len = 0;

	while (b[len] != '0')
	{
		len++;
	}
	while (c < len)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		c++;
	}

	int a = 1;
	int max = 1;

	while (a < len)
	{
		max *= 2;
		a++;
	}

	int i;
	int sum = 0;

	for (i = 0; i < len; i++)
	{
		sum += b[i] * max;
		max /= 2;
	}
	return (sum);
}
