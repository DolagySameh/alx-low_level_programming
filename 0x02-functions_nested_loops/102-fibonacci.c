#include <stdio.h>
#include "main.h"
/**
* main - print fib
* Description:fibonacci number
* Return:0
*/
int main(void)
{
	unsigned long int a = 1, b = 2;

	unsigned long int result, i;

	for (i = 0; i < 49; i++)
	{
		if (a == 20365011074)
		{
			printf("%lu", a);
		}
		printf("%lu, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
	return (0);
}

