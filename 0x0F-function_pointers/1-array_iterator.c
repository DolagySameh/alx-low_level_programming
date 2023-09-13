#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - executes a function
* Description:executes a function given as a parameter
* @array:first arg
* @size:second arg
* @action:third arg
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && size && array)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
