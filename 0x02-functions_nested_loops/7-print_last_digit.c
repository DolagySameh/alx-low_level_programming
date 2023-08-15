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
	if (a < 0)
	{
		int b = -1 * (a % 10);

		return (b);
	}
	else
	{
		int b = a % 10;

		return (b);
	}
}
