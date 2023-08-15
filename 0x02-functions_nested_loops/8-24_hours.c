#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print hours
* Description:print hoursss
*/
void jack_bauer(void)
{
	int a = 48;

	while (a <= 50)
	{
		int b = 48;

		while (b <= 57)
		{
			int c = 48;

			while (c <= 53)
			{
				int d = 48;

				while (d <= 57)
				{
					_putchar(a);
					_puthchar(b);
					_putchar(':');
					_putchar(c);
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
