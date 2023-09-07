#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
* _calloc - allocates memory for an array, using malloc
* Description:allocates memory for an array, using malloc
* @nmemb:first arg
* @size:second arg
* Return:void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
