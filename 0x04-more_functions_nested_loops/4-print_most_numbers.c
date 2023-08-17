#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - print
* Description:print
*/
void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a == 50 || a == 52)
		{
			a++;
			continue;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
