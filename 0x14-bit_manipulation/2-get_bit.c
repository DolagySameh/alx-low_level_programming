#include "main.h"
#include <stdio.h>
/**
* get_bit - returns the value of a bit at a given index
* @n: first arg
* @index: second arg
* Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index <= 63)
		return (0);
	for (; i <= 63 ; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}
	return (-1);
}
