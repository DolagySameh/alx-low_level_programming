#include "main.h"
#include <stdio.h>
/**
* set_bit - set_bit at given index
* @n: first arg
* @index: second arg
* Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
	return (1);
}
