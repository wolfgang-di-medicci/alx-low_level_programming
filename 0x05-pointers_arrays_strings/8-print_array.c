#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements upto n - 1
 * @a: array variable
 * @n: number of elements in an array to be shown
 * Return: notthing when succesful
 */

void print_array(int *a, int n)
{
	int num = 0;

	while (num < n)
	{
		printf("%d", a[num]);
		if (num != (n - 1))
		{
			printf(", ");
		}
		num++;
	}
	_putchar('\n');
}
