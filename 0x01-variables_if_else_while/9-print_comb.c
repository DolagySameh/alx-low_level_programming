#include <stdio.h>
/**
* main - combination
* Descriotion:using putchar
* Return:0
*/
int main(void)
{
	int digit = 48, digit2 = 48;

	while (digit < 58)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
}
