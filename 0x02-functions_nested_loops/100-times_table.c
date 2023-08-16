#include <stdio.h>
/**
* print_times_table - printtime table
* Description:print time table
* @n:first arg
*/
void print_times_table(int n)
{
	int i, z;

	for (i = 0; i <= n; i++)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			z = i * j;
			if (z <= 9)
			{
				_putchar(z + 48);
			}
			else
			{
				if (z >= 10 && z < 100)
				{
					_putchar((z / 10) + 48);
					_putchar((z % 10) + 48);
				}
				else if (z > 100)
				{
					_putchar((z / 100) + 48);
					_putchar((z / 10) % 10 + 48);
					_putchar((z % 10) + 48);
				}
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
