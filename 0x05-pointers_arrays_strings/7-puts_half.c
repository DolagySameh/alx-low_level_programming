#include <stdio.h>
#include "main.h"
/**
* puts_half - print
* Description:print
* @str:arg
*/
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = (i / 2) + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

