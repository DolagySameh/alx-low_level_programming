#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* Description:gets the length of a prefix substring.
* @s:first arg
* @accept:second arg
* Return:unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else
			{
				j++;
				continue;
			}
		}
		if (s[i] != accept[j])
			break;
		i++;
	}
	return (count);
}
