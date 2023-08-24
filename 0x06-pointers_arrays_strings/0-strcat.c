#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strcat - concatenate two string
* Description:concatenate
* @dest:first arg
* @src:second arg
* Return:return pointer
*/
char *_strcat(char *dest, char *src)
{
	char *pptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*pptr++ = *src++;
	}
	*pptr = '\0';
	return (dest);
}
