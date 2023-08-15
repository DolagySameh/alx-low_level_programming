#include <stdio.h>
#include "main.h"
/**
* print_alphabet - print lowercase
* Description:print lowercae alphabet
*/
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
	}
	_putchar('\n');
}
