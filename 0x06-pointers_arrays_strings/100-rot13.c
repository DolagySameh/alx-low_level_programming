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
			'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
			'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v', 'w',
			'x', 'y', 'z', '\0'};

	char num[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B',
			'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r',
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
			'i', 'j', 'k', 'l', 'm', '\0'};

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
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
