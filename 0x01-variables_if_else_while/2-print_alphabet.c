#include <stdio.h>
/**
* main - entry point
* Descrition: print all lowercase
* Return:0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
