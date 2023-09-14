#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers
* Description:prints numbers, followed by a new line.
* @separator:first arg
* @n:second arg
* @...:third arg
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i = 0;

	va_start(op, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(op, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

}
