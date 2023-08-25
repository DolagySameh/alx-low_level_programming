#include <stdio.h>
#include "main.h"
/**
* cap_string - captalize string
* Description:captelixe string
* @a:first arg
* Return:return pointer
*/
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			if (a[i] == a[0])
				a[0] = a[0] - 32;
		}
		else if (a[i] == '.'
				|| a[i] == '\n'
				|| a[i] == '\t'
				|| a[i] == ' '
				|| a[i] == ','
				|| a[i] == '?'
				|| a[i] == '!'
				|| a[i] == ';'
				|| a[i] == '"'
				|| a[i] == ')'
				|| a[i] == '('
				|| a[i] == '}'
				|| a[i] == '{')
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
				a[i + 1] = a[i + 1] - 32;
			else
				a[i + 1] = a[i + 1];
		}
		else
		{
			a[i] = a[i];
		}
		i++;
	}
	return (a);
}
