#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head:pointer to first node
* @n:data to be added in new node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (ptr && ptr->next != NULL)
		ptr = ptr->next;
	if (ptr == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		ptr->next = new;
		new->next = NULL;
	}
	return (new);
}
