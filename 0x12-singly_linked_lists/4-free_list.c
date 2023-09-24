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
	list_t *t;

	while (ptr != NULL)
	{
		t = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = t;
	}
}
