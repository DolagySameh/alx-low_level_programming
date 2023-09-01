#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* Description:multiplies two numbers
* @argc:first arg
* @argv:second arg
* Return:0
*/
int main(int argc, char *argv[])
{
	int i = 1;

	int result = 1;

	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			result = result * atoi(argv[i]);
			i++;
		}
		printf("%d\n", result);
	}
	return (0);
}
