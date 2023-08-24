#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strncat - concatenate two string
* Description:concatenate two string with limited number
* @dest:first arg
* @src:second arg
* @n:third arg
* Return:return pointer
*/
char *_strncat(char *dest, char *src, int n)
{

	char *pptr = dest + strlen(dest);

	int count = 1;

	while (*src != '\0')
	{
		*pptr++ = *src++;
		count++;
		if (count > n)
			break;
	}
	*pptr = '\0';
	return (dest);
}
