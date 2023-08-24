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
	int j = 0, len;

	int i = 0;

	int count = 1;

	while (dest[j] != '\0')
	{
		j++;
	}
	len = j;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
		count++;
		if (count > n)
			break;
	}
	dest[len + i] = '\0';
	return (dest);
}
