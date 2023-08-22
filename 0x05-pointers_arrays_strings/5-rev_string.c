#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* rev_string - rev
* Description:rev
* @s:first arg
*/
void rev_string(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
