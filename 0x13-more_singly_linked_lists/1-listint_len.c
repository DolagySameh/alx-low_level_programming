#include <stdio.h>
#include "lists.h"
/**
* listint_len - returns the number of elements in a linked
* @h:pointer to first node
* Return:number of element
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
