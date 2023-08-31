#include "main.h"
/**
 * sqrt2 - check
 * Description:check
 * @n:first arg
 * @m:second arg
 * Return:int
 */
int sqrt2(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m < n)
		return (sqrt2(n, m + 1));
	return (-1);
}
/**
* _sqrt_recursion - returns the natural square root of a number.
* Description:returns the natural square root of a number.
* @n:first arg
* Return:int
*/
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
