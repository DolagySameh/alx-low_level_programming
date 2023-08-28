#include <stdio.h>
#include <string.h>
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
	int k = 0, i = 0;

	while (needle[k] != '\0')
	{
		k++;
	}
	for (; needle[i] != '\0'; i++)
	{
		int j = 0;

		for (; haystack[j] != '\0'; j++)
		{
			while (needle[i] == haystack[j] && needle[i] != '\0')
			{
				i++;
				j++;
			}
			if (needle[i - 1] == haystack[j - 1] && needle[i] == '\0')
				return (&haystack[j - k]);
			i = 0;
			continue;
		}
	}
	return (0);
}
