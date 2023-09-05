#include <stdio.h>
#include "main.h"
/**
* create_array - create array
* Description:create array
* @size:first arg
* @c:second arg
* Return:return char
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = (char*)malloc(size + 1);

	if (ptr == NULL || size == 0)
		return (NULL);
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
