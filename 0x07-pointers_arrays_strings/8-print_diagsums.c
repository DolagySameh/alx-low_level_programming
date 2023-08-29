#include <stdio.h>
#include "main.h"
/**
* print_diagsums - prints the sum of the two
* Description:prints the sum of the two
* @a:first arg
* @size:second arg
*/
void print_diagsums(int *a, int size)
{
	int sum = 0, sum2 = 0, i = 0;

	int x = size - 1;

	for (; i < size; i++)
	{
		sum += a[i];
		sum2 += a[x];
		x--;
		a += size;
	}
	printf("%d, %d\n", sum, sum2);
}
