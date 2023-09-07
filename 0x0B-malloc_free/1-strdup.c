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
	 int i = 0; char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * strlen(str) + 1);

	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
