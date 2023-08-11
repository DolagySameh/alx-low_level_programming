#include <stdio.h>
/**
* main - entry point
* Descrition: print all lowercase and uppercae excpet q and e
* Return:0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' | ch == 'q')
			ch++;
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
