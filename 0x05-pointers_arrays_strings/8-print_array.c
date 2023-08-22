#include <stdio.h>
#include "main.h"
/**
* print_array - print
* Description:print
* @a:array arg
* @n:second arg
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	printd("\n");
}
