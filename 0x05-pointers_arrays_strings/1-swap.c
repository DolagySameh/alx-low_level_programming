#include <stdio.h>
/**
* swap_int - swap
* Description:swap
* @a:first arg
* @b:second arg
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
