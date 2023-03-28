#include "main.h"

/**
 * swap_int - swaps the value of two input varables
 * @a: variable 1
 * @b: variable 2
 * Return: nothing when successful
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
