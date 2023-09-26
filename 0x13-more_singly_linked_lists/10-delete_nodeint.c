#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index index
* Description: delete nodes at certain position
* @head:pointer to first node
* @index: index of node to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		*head = ptr->next;
		ptr->next = NULL;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	while (ptr && ptr2 && i <= index)
	{
		if (i == index)
		{
			ptr2->next = ptr->next;
			ptr->next = NULL;
			free(ptr);
			ptr = NULL;
			return (1);
		}
		ptr2 = ptr;
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
