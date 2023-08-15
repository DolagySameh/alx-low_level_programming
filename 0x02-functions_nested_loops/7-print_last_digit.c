#include <stdio.h>
#include "main.h"
/**
* print_last_digit - print last digit
* Description:print last digit
* @a:first arg
* Return:lastdigit
*/
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		b = -1 * (a % 10);
	}
	else
	{
		b = a % 10;
	}
	_putchar(b + '0');
	return (b);

}
