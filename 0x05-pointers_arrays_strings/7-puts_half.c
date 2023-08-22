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
	if (i % 2 == 0)
	{
		for (j = (i / 2); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	if (i % 2 != 0)
	{
		int k;

		for (k = ((i - 1) / 2); str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
		_putchar('\n');
	}
}

