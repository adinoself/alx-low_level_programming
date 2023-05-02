#include "lists.h"

/**
 * free_listint_safe - Function that frees a listint_t list
 * and sets the head to NULL
 * @h: Paramter pointer to the first node in the linked list
 *
 * Return: The size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int xyz;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		xyz = *h - (*h)->next;
		if (xyz > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
