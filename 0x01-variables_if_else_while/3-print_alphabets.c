#include <stdio.h>
/**
* main - entry point
* Descrition: print all lowercase and uppercae
* Return:0
*/
int main(void)
{
	char ch = 'a', ch2 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
