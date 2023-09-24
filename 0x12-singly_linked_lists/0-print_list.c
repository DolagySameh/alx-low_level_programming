#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list_t list.
* @h:first arg
* Return:size_t
*/
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)");
			printf("\n");
		}
		else
		{
			printf("[%ld] ", strlen(ptr->str));
			printf("%s", ptr->str);
			printf("\n");
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
