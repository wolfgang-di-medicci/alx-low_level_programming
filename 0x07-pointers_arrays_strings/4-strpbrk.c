#include "main.h"

/**
 * _strpbrk - Entry function
 * @s: input
 * @accept: another input
 * Return: 0 when succesful
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
