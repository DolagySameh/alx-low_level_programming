#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _memcpy - Write a function that copies memory area.
* Description:Write a function that copies memory area.
* @dest:first arg
* @src:second arg
* @n:third arg
* Return:pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
