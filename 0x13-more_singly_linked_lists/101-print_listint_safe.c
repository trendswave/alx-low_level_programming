#include "lists.h"

/**
* print_listint_safe - Function that Prints a listint_t linked list
* @head: Head of the list
*
* Return: Numbers of elements of the list
**/
size_t print_listint_safe(const listint_t *head)
{
	int q, marker;

	if (head == NULL)
		return (0);

	for (q = marker = 0; head != NULL || marker; q++)
	{
		printf("[%p] %d\n", (void *) head, head->n);

		if (head <= head->next)
		{
			marker = 1;
			break;
		}

		head = head->next;
		marker = 0;
	}

	if (marker)
	{
		head = head->next;
		printf("-> [%p] %d\n", (void *) head, head->n);
	q++;
	}

	return (q);
}
