#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strchr - locates a character in a string.
* Description:locates a character in a string.
* @s:first arg
* @c:second arg
* Return:pointer
*/
char *_strchr(char *s, char c)
{
	while (*s++ != '\0')
	{
		if (*s != c)
		{
			continue;
		}
		else
		{
			if (*s == c)
			{
				break;
			}
		}
	}
	if (*s != c)
		return (NULL);
	return (s);
}
