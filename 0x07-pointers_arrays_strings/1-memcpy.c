#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: A pointer to the memory area to copy src into.
 * @src: the source buffer to copy character from.
 * @n: the number of bytes to copy from src.
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
