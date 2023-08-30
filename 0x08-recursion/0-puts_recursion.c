#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - prints a string
* Description:prints a string
* @s:first arg
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
