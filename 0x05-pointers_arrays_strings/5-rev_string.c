#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* rev_string - rev
* Description:rev
* @s:first arg
*/
void rev_string(char *s)
{
	int i = strlen(s) - 1, j;

	for (j = 0; j < i / 2; j++)
	{
		int temp = s[j];

		s[j] = s[i - j];
		s[i - j] = temp;
	}

}
