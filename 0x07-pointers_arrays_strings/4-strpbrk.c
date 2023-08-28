#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strpbrk -  searches a string for any of a set of bytes.
* Description: searches a string for any of a set of bytes.
* @s:first arg
* @accept:second arg
* Return:pointer
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else
			{
				j++;
				continue;
			}
		}
		if (s[i] == accept[j])
			break;
		i++;
	}
	if (s[i] == '\0' && accept[j] == '\0')
		return (NULL);
	return (s + i);
}
