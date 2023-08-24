#include <stdio.h>
#include "main.h"
/**
* _strncpy - copy
* Description:copy
* @dest:first arg
* @src:second arg
* @n:third arg
* Return:return pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
