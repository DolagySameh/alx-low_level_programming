#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* malloc_checked - allocates memory using malloc
* Description:allocates memory using malloc
* @b:first arg
* Return:pointer
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
