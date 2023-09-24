#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_node_end - adds a new node at the last of a list_t list
* @head:first arg
* @str:second arg
* Return:the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr = *head;

	while (ptr && ptr->next != NULL)
		ptr = ptr->next;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = NULL;
	if (ptr)
		ptr->next = new;
	else
		*head = new;
	return (new);

}
