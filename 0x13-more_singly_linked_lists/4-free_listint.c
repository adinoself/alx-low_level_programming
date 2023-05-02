#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: Parameter pointer listint_t list to be freed
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
