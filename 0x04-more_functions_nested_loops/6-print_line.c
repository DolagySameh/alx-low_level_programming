#include <stdio.h>
#include "main.h"
/**
* print_line - print
* @n:first arg
* Description:print
*/
void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
