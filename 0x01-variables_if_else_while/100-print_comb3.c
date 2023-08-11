#include <stdio.h>
/**
* main - cobination of two digits
* Description:using putchar
* Return:0
*/
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		int digit2 = 48;

		while (digit2 <= 57)
		{
			if (digit != digit2 && digit < digit2)
			{
				putchar(digit);
				putchar(digit2);
				if (digit + digit2 != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
