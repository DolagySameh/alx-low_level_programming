#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - test
* Description:test function
* @argc:first arg
* @argv:second arg
* Return:int
*/
int main(int argc, char *argv[])
{
	int (*ptr)(int, int), a, b, res;

	if (argc != 4)
	{
		printf("Erorr\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	if (!ptr)
	{
		printf("Erorr\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && b == 0) || (argv[2][0] == '%' && b == 0))
	{
		printf("Erorr\n");
		exit(100);
	}
	res = ptr(a, b);
	printf("%d\n", res);
	return (0);
}
