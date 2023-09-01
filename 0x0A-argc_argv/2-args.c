#include <stdio.h>
/**
* main - prints all arguments it receives.
* Description:prints all arguments it receives.
* @argc:first arg
* @argv:second arg
* Return:0
*/
int main(int argc, char *argv[])
{
	int i = 1;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
