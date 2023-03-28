#include "main.h"

/**
 * _strlen - finds the length of a given string
 * @s: string variable
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int numchar = 0;

	while (s[numchar] != '\0')
	{
		numchar++;
	}
	return (numchar);
}
