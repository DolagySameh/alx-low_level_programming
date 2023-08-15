#include <stdio.h>
#include "main.h"
/**
* main - print
* Description:using printf
* Return:0
*/
int main(void)
{
	char a[] = "_putchar";

	for (int i = 0; i <= 7; i++)
	{
		_putchar(a[i]);
	}
	_putchar("\n");
	return (0);
}
