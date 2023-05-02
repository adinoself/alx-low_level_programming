#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts
 * a new node in a linked list,
 * at a given position
 * @head: Paramter pointer to the first node in the list
 * @idx: Parameter index of the list where the new node
 * should be added. The index starts at 0
 * @n: data to insert in the new node
 *
 * Return: The pointer to the new node if possible,
 * otherwise retrun NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}

	return (NULL);
}
