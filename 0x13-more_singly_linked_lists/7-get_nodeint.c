#include <stdio.h>
#include "lists.h"
/**
* get_nodeint_at_index -  returns the nth node of a listint_t linked list
* @head: pointer to first node
* @index: index of node to return
* Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
