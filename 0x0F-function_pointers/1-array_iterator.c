#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a newline
 * @array: array input
 * @size: size of array
 * @action: pointer to a fuction that performs specific task
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
