#include <stdio.h>
/**
* main - hexadecimal
* Description:using put char
* Return:0
*/
int main(void)
{
	int n = 48, n2 = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (n2 <= 'f')
	{
		putchar(n2);
		n2++;
	}
	putchar('\n');
	return (0);
}
