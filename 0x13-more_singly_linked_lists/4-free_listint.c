#include "lists.h"
#include <stdlib.h>

/**
 * free_listlint - free a listint_t list
 * @head - first node of linked list
 *
 * Return void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}


