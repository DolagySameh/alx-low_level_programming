#include <stdio.h>
#include "main.h"
/**
* main - print fib
* Description:fibonacci number
* Return:0
*/
int main(void)
{
	long long int i, a = 1, b = 2,result;

	for (i = 0; i <= 50; i++)
	{
		printf("%lld, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
	return 0;
}

