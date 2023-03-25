#include "main.h"

/**
 * jack_bauer - main
 * Return: from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hr = 0, hrmax = 23, minut = 0, minutmax = 59;

	while (hr <= hrmax)
	{
		while (minut <= minutmax)
		{
			_putchar(hr < 9 ? 0 + '0' : hr / 10 + '0');
			_putchar(hr < 9 ? hr + '0' : hr % 10 + '0');
			_putchar(':');
			_putchar(minut < 9 ? 0 + '0' : minut / 10 + '0');
			_putchar(minut < 9 ? minut + '0' : minut % 10 + '0');
			_putchar('\n');
			minut++;
		}
		minut = 0;
		hr++;
	}
}
