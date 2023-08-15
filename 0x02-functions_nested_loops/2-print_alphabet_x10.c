#include <stdio.h>
/**
* print_alphabet_x10 - print
* Description:print
*/
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		int a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
