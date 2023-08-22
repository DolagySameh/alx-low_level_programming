#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
/**
* main - random
* Description:generate random strong passward
* Return:0
*/
int main(void)
{
	int sum, c;

	srand(time(NULL));
	while(sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
