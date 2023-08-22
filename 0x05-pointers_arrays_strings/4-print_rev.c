#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* print_rev - rev
* Description:rev
* @s:first arg
*/
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
