#include "main.h"
/**
* prime2 - checp n is prime or not
* Description:prime function
* @a:first arg
* @b:second arg
* Return:int
*/
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
* is_prime_number - checp n is prime or not
* Description:prime function
* @n:first arg
* Return:int
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
