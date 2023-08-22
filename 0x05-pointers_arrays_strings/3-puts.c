#include <stdio.h>
#include "main.h"
/**
* _puts - print
* Description:print
* @str:first arg
*/
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
