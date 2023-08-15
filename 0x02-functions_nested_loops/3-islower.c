#include <stdio.h>
#include "main.h"
/**
* _islower - print
* Description - print
* @c:take int
* Return: 1 or 0
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
