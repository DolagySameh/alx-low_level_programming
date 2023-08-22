#include <stdio.h>
/**
* _strcpy - copy
* Description:copy
* @dest:irst arg
* @src:second arg
* Return:address
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
