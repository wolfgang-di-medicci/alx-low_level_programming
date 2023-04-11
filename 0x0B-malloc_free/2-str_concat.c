#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - length of string
 * @str: input string
 * Return: string length
 */

int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: s1 joined with s2, NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	int leng_s1, leng_s2, i, j;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	leng_s1 = str_len(s1);
	leng_s2 = str_len(s2);
	conc = (char *) malloc(((leng_s1 + leng_s2) - 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		conc[i] = s2[j];
	conc[i] = '\0';
	return (conc);
}
