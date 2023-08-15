#include <stdio.h>
/**
* print_alphabet_x10 - print
* Description:print
*/
void print_alphabet_x10(void)
{
	int n = 10, a = 97;

	for (int i = 0; i < 10; i++)
	{
		while (a <= 122)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
