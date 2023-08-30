#include <stdio.h>
#include "main.h"
/**
* _print_rev_recursion - prints a string in reverse.
* Description:prints a string in reverse.
* @s:firts arg
*/
void _print_rev_recursion(char *s)
{
	if (*++s != '\0')
	{
		_print_rev_recursion(s);
		s--;
	}
	else
		if (*s == '\0')
			s--;
	_putchar(*s);
}
