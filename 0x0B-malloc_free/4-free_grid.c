#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees a 2 dimensional grid
* Description:frees a 2 dimensional grid
* @grid:first arg
* @height:second arg
*/
void free_grid(int **grid, int height)
{
	int i = height - 1;

	while (i--)
	{
		free(grid[i]);
	}
	free(grid);
}
