#include <stdio.h>
/**
* main - four compination
* Description:unsing putchar
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
				int l = 48;

				while (l <= 57)
				{
					if (i <= k && j < l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i + j + k + l != 227)
						{
							putchar(',');
							putchar(' ');
						}
					}
				l++;
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
