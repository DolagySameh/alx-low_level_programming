#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head:pointer to first node
* @n:data add in a node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
