#include "lists.h"

/**
 * listint_len - list the elements of a list
 *
 * @h: head pointer
 *
 * Return: elements of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
