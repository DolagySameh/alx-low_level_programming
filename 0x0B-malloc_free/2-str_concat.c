#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* str_concat - concat two string
* Description:concatenates two strings.
* @s1:first arg
* @s2:second arg
* Return:char
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	int i = 0, j = 0;

	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
