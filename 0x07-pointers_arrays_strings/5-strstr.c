#include <stdio.h>
#include "main.h"
/**
* _strstr - locates a substring.
* Description:locates a substring.
* @haystack:first arg
* @needle:second arg
* Return:pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int k = 0, i = 0, j;

	while (needle[k] != '\0')
		k++;
	for (; needle[i] != '\0'; i++)
	{
		j = 0;
		for (; haystack[j] != '\0'; j++)
		{
			while (needle[i] == haystack[j] && needle[i] != '\0')
			{
				i++;
				j++;
			}
			if (needle[i - 1] == haystack[j - 1] && needle[i] == '\0')
				return (&haystack[j - k]);
			if (needle[i - 1] == haystack[j - 1] && needle[i] != '\0' && haystack[j] == '\0')
				return (0);
			i = 0;
			continue;
		}
		if (needle[0] != haystack[j - 1] && haystack[j] == '\0' && needle[i] != '\0')
			return (0);
	}
	return (0);
}
