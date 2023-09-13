#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name
* Description:prints a name
* @name:first arg
* @f:second arg
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
