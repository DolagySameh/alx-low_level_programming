#include <stdio.h>
#include "main.h"
/**
* _isupper - check is upper
* Description:check
* @c:first arg
* Return:int
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
