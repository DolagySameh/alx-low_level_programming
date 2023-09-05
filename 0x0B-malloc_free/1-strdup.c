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

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	if (i > strlen(str) + 1)
		return (NULL);
	return (ptr);
}
