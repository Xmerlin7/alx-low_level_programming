#include "lists.h"
/**
 *listint_len - prints number of nodes
 *@h: head of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t ctr = 0;

	while (h)
	{
		ctr++;
		h = h->next
	}
	return (ctr);
}
