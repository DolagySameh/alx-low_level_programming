#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - copy of the string
* Description:copy of the string
* @str:first arg
* Return:char
*/
char *_strdup(char *str)
{
	long unsigned int i = 0;

	char *ptr = (char *)malloc(strlen(str) + 1);

	if (ptr == NULL || str == NULL)
		return (NULL);

	while (i < strlen(str))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
