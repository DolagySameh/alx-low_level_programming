#include <stdio.h>
#include "lists.h"
/**
* list_len - returns the number of elements in a linked list_t list
* Description:length of linked list
* @h:first arg
* Return:size_t
*/
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
