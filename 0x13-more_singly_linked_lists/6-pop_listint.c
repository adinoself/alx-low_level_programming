#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head nodes's data(n)
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
	{
		return (0);
	}

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
