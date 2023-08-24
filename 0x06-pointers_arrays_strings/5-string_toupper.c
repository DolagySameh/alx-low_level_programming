#include <stdio.h>
#include "main.h"
/**
* string_toupper - toupper
* Description:uppercase
* @a:arg
* Retutn:pointer
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
		else
		{
			a[i] = a[i];
		}
		i++;
	}
	return (a);
}
