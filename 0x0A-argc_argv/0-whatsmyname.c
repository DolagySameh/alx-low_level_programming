#include <stdio.h>
/**
* main - print program name
* Description:print program name
* @argc:first arg
* @argv:array of string
* Return:0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
