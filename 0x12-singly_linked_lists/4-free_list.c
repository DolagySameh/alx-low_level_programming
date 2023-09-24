#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_list - frees a list_t list
* @head:first arg
*/
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free (head);
		head = ptr;
	}
}
