#include <stdio.h>
#include "main.h"
/**
* times_table - prints the 9 times table
* Description:prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	for (int i = 48; i <= 57 ; i++)
	{
		for (int j = 48; j <= 57; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
