#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - makes a duplicate of str to new memory allocation
 * @str: string input
 * Return: the duplicate string
 */

char *_strdup(char *str)
{
	char *strnew;
	int i = 0, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	strnew = malloc(sizeof(char) * (i + 1));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		strnew[r] = str[r];
	}
	return (strnew);
}
