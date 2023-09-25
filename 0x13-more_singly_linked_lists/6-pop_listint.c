#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to first node
* Return: head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int data;

	if (ptr == NULL)
		return (0);
	*head = ptr->next;
	data = ptr->n;
	ptr->next = NULL;
	free(ptr);
	ptr = NULL;
	return (data);
}
