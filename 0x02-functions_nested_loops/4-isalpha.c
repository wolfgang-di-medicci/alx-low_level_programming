#include "main.h"

/**
 * _isalpha - checks if a char is an alphabet
 * @c: variable for inpust
 * Return: 1 if it is alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ('a' <= c <= 'z' || 'A' <= c <= 'Z')
		return (1);
	else
		return (0);
}
