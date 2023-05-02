#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: Parameter linked list to search for
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *abc = head;
	listint_t *xyz = head;

	if (!head)
	{
		return (NULL);
	}
	while (abc && xyz && xyz->next)
	{
		xyz = xyz->next->next;
		abc = abc->next;
		if (xyz == abc)
		{
			abc = head;
			while (abc != xyz)
			{
				abc = abc->next;
				xyz = xyz->next;
			}
			return (xyz);
		}
	}

	return (NULL);
}
