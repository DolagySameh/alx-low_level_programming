#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strlen - print
* Description:print
* @s:first arg
* Return:integer 0 or 1
*/
int _strlen(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
