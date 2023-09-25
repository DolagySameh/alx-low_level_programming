#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to first node
* @idx: index to add new node
* @n: data to be added in new node
* Return:  the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new;
	unsigned int i = 0;

	new = (listint_t *)malloc(sizeof(listint_t));
	new->n = n;
	if (new == NULL || head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}
	while (ptr && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
