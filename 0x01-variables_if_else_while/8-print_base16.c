#include<stdio.h>

/**
 * main - main entry point
 * Return: 0 when succesful
*/

int main(void)
{
	char num;
	char letter;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);

