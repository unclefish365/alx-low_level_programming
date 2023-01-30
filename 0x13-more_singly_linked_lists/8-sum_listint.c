#include "lists.h"

/**
 * sum_listint - calculates sum of all data (n) of a listint_t list
 * @head: pointer to head of listint_t list
 *
 * Return: if list is empty - 0
 * otherwise - the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
