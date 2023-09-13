#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer.
* Description:searches for an integer.
* @array:first arg
* @size:second arg
* @cmp:third arg
* Return:int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, res;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		while (i < size)
		{
			res = (*cmp)(array[i]);
			if (res == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
