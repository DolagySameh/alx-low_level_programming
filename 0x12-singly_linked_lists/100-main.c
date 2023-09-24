#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
* before_main - print pefor main
*/
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	print_befor();
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature");
	printf(", challenges one to a race.)\n");
	return (0);
}
