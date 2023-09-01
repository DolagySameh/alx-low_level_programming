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
	int len = strlen(dest);

	int i = 0;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}
