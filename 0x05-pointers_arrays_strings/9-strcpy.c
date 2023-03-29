#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: final destination of string
 * @src: string been copied
 * Return: the copied string
*/

char *_strcpy(char *dest, char *src)
{
	int count = 0, i;

	while ( *src)
	{
		src++;
		count++;
	}
	for (i = 0; i < count; i++)
		src--;
	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
