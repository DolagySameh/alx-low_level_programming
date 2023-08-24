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
	int len = strlen(dest);
	
	int i = 0;

	int count = 1;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
		count++;
		if (count > n)
			break;
        }
        return (dest);
}
