#include <stdio.h>
#include "main.h"
/**
* main - print fib
* Description:fibonacci number
* Return:0
*/
int main(void)
{
	unsigned int a = 1, b = 2;

	unsigned int result, i;

	for (i = 0; i <= 50; i++)
	{
		printf("%u, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
	return (0);
}

