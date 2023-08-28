#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _memset - fills memory with a constant byte.
* Description:fills memory with a constant byte.
* @s:first arg
* @b:second arg
* @n:third arg
* Return:pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
