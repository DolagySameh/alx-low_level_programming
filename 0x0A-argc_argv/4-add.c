#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
* isNum - check
* Description:check
* @a:arg
* Return:int
*/
int isNum(char a[])
{
	int i = 0, l = strlen(a);

	for (; i < l; i++)
	{
		if (!isdigit(a[i]))
			return (1);
	}
	return (0);
}
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
			if (isNum(argv[i]) == 1)
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
