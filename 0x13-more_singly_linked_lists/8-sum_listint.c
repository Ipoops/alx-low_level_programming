#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 *
 * Return: sum of elements
 */

int sum_listint(listint_t *head)

{

	unsigned int i;



	if (head == NULL)

		return (0);

	for (i = 0; i < index; i++)

	{

		head = head->next;

		if (head == NULL)

			return (NULL);

	}

	return (head);

}
