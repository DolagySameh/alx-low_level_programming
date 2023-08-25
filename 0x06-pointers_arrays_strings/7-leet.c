#include <stdio.h>
#include "main.h"
/**
* leet - ecoding
* Description:encoding
* @a:first arg
* Return:pointer
*/
char *leet(char *a)
{
	char alpha[] = {'A', 'E', 'O', 'T', 'L'};

	int num[] = {4, 3, 0, 7, 1};

	int i = 0, j = 0;

	while (a[i] != '\0')
	{
		while (alpha[j] != '\0')
		{
			if ((a[i] == alpha[j]) || (a[i] == alpha[j] + 32))
			{
				a[i] = num[j] + 48;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
