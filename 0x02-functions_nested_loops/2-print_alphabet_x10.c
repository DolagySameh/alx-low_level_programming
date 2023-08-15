#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print
* Description:print
*/
void print_alphabet_x10(void)
{
	int n = 1;

	while (n <= 10)
	{
		int a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}
}
