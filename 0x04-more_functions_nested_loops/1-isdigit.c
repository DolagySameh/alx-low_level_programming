#include <stdio.h>
#include "main.h"
/**
* _isdigit - check is digit
* Description:check
* @c:first arg
* Return:int
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
