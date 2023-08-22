#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* puts2 - print
* Description:print
* @str:first arg
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
