#include <stdio.h>
#include "lists.h"
/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to first node
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *ptr2 = NULL;

	while (*head != NULL)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ptr2;
	}
	*head = ptr;
	return (*head);
}
