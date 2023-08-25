#include <stdio.h>
#include "main.h"
/**
* rot13 - encode
* Description:encode
* @a:first arg
* Return:pointer
*/
char *rot13(char *a)
{
	char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
			'H', 'I', 'J', 'K', 'L', 'M', 'N',
			'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z', '\0'};

	char num[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B',
			'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			'K', 'L', 'M', '\0'};

	int i = 0, j = 0;

	while (a[i] != '\0')
	{
		while (alpha[j] != '\0')
		{
			if (a[i] == alpha[j])
			{
				a[i] = num[j];
				break;
			}
			else if (a[i] == alpha[j] + 32)
			{
				a[i] = num[j] + 32;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
