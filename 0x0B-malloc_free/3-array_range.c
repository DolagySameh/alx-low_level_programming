#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
* array_range - creates an array of integers
* Description:creates an array of integers
* @min:first arg
* @max:second arg
* Return:interger
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
