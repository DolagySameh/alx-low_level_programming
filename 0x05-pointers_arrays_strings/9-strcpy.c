#include <stdio.h>
#include "string.h"
/**
* _strcpy - copy
* Description:copy
* @dest:irst arg
* @src:second arg
* Return:address
*/
char *_strcpy(char *dest, char *src)
{
	unsigned long int i = 0;

	while (i < strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
