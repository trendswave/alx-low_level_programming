#include "lists.h"

/**
 * sum_listint - This function returns the sum of all the data
 * of a listint_t linked list
 * @head: A pointer to the linked list
 * Return: The sum of all the integer data of the list
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
	}
