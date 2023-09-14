#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints strings
* Description:prints strings, followed by a new line
* @separator:first arg
* @n:second arg
* @...:third arg
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *v;
	va_list op;

	va_start(op, n);
	for (; i < n; i++)
	{
		v = va_arg(op, char *);
		printf("%s", (v == NULL) ? "nill" : v);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

}
