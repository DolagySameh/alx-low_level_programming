#include <stdio.h>
#include "main.h"
/**
* main - multiply two numbers
* Description:sum of multiply two numbers
* Return:0
*/
int main(void)
{
	int i, j, n = 3, sum = 0, sum2 = 0, n2 = 5;

	if (n == 3)
	{
		for (i = 1; i * 3 < 1024; i++)
		{
			sum = sum + 3 * i;
		}
	}
	if (n2 == 5)
	{
		for (int j = 1; j * 5 < 1024; j++)
		{
		sum2 = sum2 + 5 * j;
		}
	}
	printf("%d\n", sum + sum2);
	return (0);
}
