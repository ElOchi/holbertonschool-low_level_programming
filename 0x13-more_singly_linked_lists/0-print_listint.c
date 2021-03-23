#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t lis
 * @h: head of the linked list
 *
 * Return: The number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		print_listint(h->next);
	}

	return (count);
}
