#include <stdio.h>
#include "main.h"
/**
* more_numbers- print
* Description:print
*/
void more_numbers(void);
{
	int a = 1;

	while (a <= 10)
	{
		int b = 0;

		while (b <= 14)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
