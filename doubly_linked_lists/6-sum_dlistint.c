#include "lists.h"

/*
 * sum_dlistint - calculates the sum of all the data in a dlistint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
