#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid -  returns a pointer to a 2 dimensional array
* Descritption: returns a pointer to a 2 dimensional array
* @width:first arg
* @height:second arg
* Return:integer
*/
int **alloc_grid(int width, int height)
{
	int **ptr;

	int i = 0, j = 0;

	ptr = malloc(height * sizeof(*ptr));

	if (ptr == NULL || width <= 0 || height <= 0)
		return (NULL);
	for (; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(**ptr));
		if (ptr[i] == NULL)
		{
			while (i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
	}
	return (ptr);
}
