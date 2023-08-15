#include <stdio.h>
#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* Description:prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*/
void jack_bauer(void)
{
	int a = 48;

	while (a <= 57)
	{
		int b = 48;

		while (b <= 57)
		{
			int c = 48;

			while (c <= 57)
			{
				int d = 48;

				while (d <= 57)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c):
					_putchar(d);
					_putchar('\n');
					d++;
				}
			c++;
			}
		 b++;
		}
	a++;
	}
}
