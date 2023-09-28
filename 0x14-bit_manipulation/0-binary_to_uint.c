#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: char to be converted
* Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;
	int len;

	while (b[i] != '\0')
		len++;
	len = len - 1;
	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == 48)
			sum += 0 << len;
		if (b[i] == 49)
			sum += 1 << len;
		i++;
		len--;
	}
	return (sum);
}
