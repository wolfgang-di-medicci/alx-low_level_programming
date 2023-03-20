#include<stdio.h>

/**
 * main - main entry point
 * Return: 0 when succesful
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
		return (0);
}


