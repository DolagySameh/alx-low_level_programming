#include <stdio.h>
/**
* main - combination of three digit
* Description:by putchar function
* Return:0
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		int j = 48;

		while (j <= 57)
		{
			int k = 48;

			while (k <= 57)
			{
				if (i != j && j != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i + j + k != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			k++;
			}
		j++;
		}
	i++;
	}
	putchar('\n');
	return (0);
}
