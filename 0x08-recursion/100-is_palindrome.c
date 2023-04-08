#include "main.h"

/**
 * leng_helper - checks length of string
 * @s: string input
 * Return: return length of string
 */

int leng_helper(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + leng_helper(s + 1));
}

/**
 * checkpal - checks if it is palindrome
 * @lengstr: length of string
 * @s: string input
 * @i: first element of string
 * Return: 1 if string is palindrome, otherwise 0
 */

int checkpal(int i, int lengstr, char *s)
{
	if (lengstr > 0)
	{
		if (s[i] == s[lengstr])
			return (checkpal(i + 1, lengstr - 1, s));
		else if (s[i] != s[lengstr])
			return (0);
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is palindrome using other functions
 * @s: string input
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	return (checkpal(0, leng_helper(s) - 1, s));
}
