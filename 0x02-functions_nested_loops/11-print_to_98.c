#include <stdio.h>
#include "main.h"
/**
* print_to_98 - print numbers to 98
* @n:first arg
*/
void print_to_98(int n)
{
	if (n <= 98 && n != 0)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 0)
	{
		int i;

 		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
		                _putchar(',');
		               _putchar(' ');
			}
		}
	}
	else
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
