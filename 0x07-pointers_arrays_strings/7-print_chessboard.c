#include <stdio.h>
#include "main.h"
/**
* print_chessboard - prints the chessboard.
* Description:prints the chessboard.
* @a:arg
*/
void print_chessboard(char (*a)[8])
{
	int j = 0, i = 0;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			printf("%c", (*a)[i]);
		}
		printf("\n");
		++a;
	}
}
