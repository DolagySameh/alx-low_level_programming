#include <stdio.h>
/**
* main - cobination of two digits
* Description:using putchar
* Return:0
*/
int main(void)
{
	int digit = 0, digit2 = 0;

	while (digit <= 9)
	{
		while (digit2 <= 9)
		{
			if (digit != digit2)
			{
				putchar(digit);
				putchar(',');
				putchar(' ');
			}
			digit2++;
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
