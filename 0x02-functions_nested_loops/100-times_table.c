#include <stdio.h>
#include "main.h"
/**
* print_times_table - print
* Description:print
* @n:first arg
*/
void print_times_table(int n)
{
	int i;

	if (n < 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				int z = i * j;

				if (z < 9)
					_putchar(z + '0');
				else
				{
					_putchar((z / 10) + 48);
					_putchar((z % 10) + 48);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		_putchar('\n');
			
		}

	}
}
