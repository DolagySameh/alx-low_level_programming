#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sum of all its parameters
* Description:sum of all its parameters
* @n:first arg
* @...:second arg
* Return:int
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list op;

	va_start(op, n);
	for (; i < n; i++)
	{
		sum += va_arg(op, int);
	}
	return (sum);
}
