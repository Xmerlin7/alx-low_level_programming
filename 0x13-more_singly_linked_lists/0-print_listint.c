#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: a pointer to the head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t ctr = 0;

	while (node != NULL)
	{
		ctr++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (ctr);
}
