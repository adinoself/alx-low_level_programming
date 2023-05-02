#include "lists.h"

/**
 * listint_len - Function that returns
 * number of elements in a listint_t list
 * @h: Parameter linked list
 *
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
