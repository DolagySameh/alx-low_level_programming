#include <stdio.h>
/**
* main - print lowercase in reverse
* Description:using puchar
* Return:0
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

