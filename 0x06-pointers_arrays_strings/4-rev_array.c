#include <stdio.h>
#include "main.h"
/**
* reverse_array - reverse
* Description:reverse array
* @a:first arg
* @n:second arg
*/
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
