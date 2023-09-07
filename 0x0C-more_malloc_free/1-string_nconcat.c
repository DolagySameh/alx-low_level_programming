#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - concatenates two strings.
* Description:concatenates two strings.
* @s1:first arg
* @s2:second arg
* @n:third arg
* Return:char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	ptr = (char *)malloc(strlen(s1) + n + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	if (n < strlen(s2))
	{
		while (s2[j] != '\0' && n--)
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
		ptr[i] = '\0';
	}
	else
		if (n >= strlen(s2))
		{
			while (s2[k] != '\0')
			{
				ptr[i] = s2[k];
				k++;
				i++;
			}
			ptr[i] = '\0';
		}
	return (ptr);
}
