#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars & initialize with a specific char
 * @size: size of array
 * @c: character to initialize
 * Return: array of chars, NULL if it fail or size is 0
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
