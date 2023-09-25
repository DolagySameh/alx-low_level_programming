#include <stdio.h>
#include "lists.h"
/**
* sum_listint - sum of all the data
* @head: pointer to first node
* Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (0);
	while (ptr && ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
