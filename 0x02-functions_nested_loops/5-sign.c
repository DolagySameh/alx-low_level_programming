#include <stdio.h>
#include "main.h"
/**
* print_sign - print
* Description:print
* @n:first arg
* Return:2 or 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
