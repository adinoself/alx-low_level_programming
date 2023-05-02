#include "lists.h"

/**
 * sum_listint - Function that calculates the sum
 * of all the data in a listint_t list
 * @head: Parameter first node in the linked list
 *
 * Return: The sum of all the data (n) in the lisint_t list
 * and if the list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sumadd = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumadd += temp->n;
		temp = temp->next;
	}

	return (sumadd);
}
