#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds positive numbers.
* Description:adds positive numbers.
* @argc:first arg
* @argv:second arg
* Return:int
*/
int main(int argc, char *argv[])
{
	int i = 1;

	int result = 0;

	if (argc - 1 == 0)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result = result + atoi(argv[i]);
			}
			i++;
		}
		printf("%d\n", result);
	}
	return (0);
}
