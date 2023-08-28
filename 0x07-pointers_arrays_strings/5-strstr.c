#include <stdio.h>
#include "main.h"
/**
* _strstr -  locates a substring.
* Description: locates a substring.
* @haystack:first arg
* @needle:second arg
* Return:pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[i])
			{
				return (haystack + j);
			}
			j++;
			continue;
		}
		if (needle[i] == haystack[j])
			break;
		i++;
	}
	return (0);
}
