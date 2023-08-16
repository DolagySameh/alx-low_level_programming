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

	for (i = 0; i < 4000000; i++)
	{
		if (a % 2 == 0)
		{
			result = a + b;
			a = b;
			b = result;
		}
	}
	printf("%ld\n", result);
	return (0);
}
