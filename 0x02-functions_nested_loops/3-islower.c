#include "main.h"

/**
 * _islower - check if it is upper or lower case
 * @c: a variable in place of input
 * Return: 1 if it is lower, 0 if it is upper case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
