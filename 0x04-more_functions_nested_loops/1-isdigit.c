#include "main.h"

/**
 * _isupper - function for upper case letters
 * @c: input variable
 * Return: 1 if upppercase, 0 if lower case
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
