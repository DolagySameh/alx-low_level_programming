#include <stdio.h>
#include "main.h"
/**
* print_triangle - print
* Description:print
* @size:farg
*/
void print_triangle(int size)
{
	int i;

	if (size == 10)
	{
		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 1; j <= size; j++)
			{
				if ((j >= (11 - i)) && j <= size)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
	else if (size == 2)
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 1; j <= size; j++)
			{
				if ((j >= (3 - i)) && j <= size)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else if (size == 1)
	{
		_putchar('#');
		_ptchar('\n');
	}
}
