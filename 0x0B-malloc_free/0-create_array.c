#include <stdlib.h>
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
	unsigned int i = 0;

	char *ptr = (char *)malloc(size);

	if (ptr == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
