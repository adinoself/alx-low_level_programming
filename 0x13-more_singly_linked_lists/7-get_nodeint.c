#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth
 * node of a listint_t linked list
 * @head: Parameter first node in the linked list
 * @index: index of the node starting at 0
 *
 * Return: The nth node of the linked list or NULL if the
 * node does not esist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
