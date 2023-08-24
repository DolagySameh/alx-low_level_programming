#include "main.h"
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
	int j = 0;

	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
