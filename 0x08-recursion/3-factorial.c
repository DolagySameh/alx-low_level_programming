#include "main.h"
/**
* factorial - factorial of a given number.
* Description:factorial of a given number.
* @n:first arg
* Return:integer
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
