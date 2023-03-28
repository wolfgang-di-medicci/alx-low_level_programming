#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: input variable string
 * Return: when succesful nothing
 */

void rev_string(char *s)
{
	int c = 0;
	int i = 0;
	char last_char;

	while (*s)
	{
		s++;
		c++;
	}
	for (i = 0; i < c; i++)
	{
		s--;
	}
	for (i = 0; i < (c / 2); i++)
	{
		int last = c - 1;

		last_char = s[last - i];
		s[last - i] = s[i];
		s[i] = last_char;
	}
}

