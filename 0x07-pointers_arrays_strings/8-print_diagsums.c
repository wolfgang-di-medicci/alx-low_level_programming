#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - main entry point
 * @a: input array
 * @size: another input
 * Return: 0 when succesful
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, y;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size - l; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - l)];
	}
	printf("%d, %d\n", sum1, sum2);
}
