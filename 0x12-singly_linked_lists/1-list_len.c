#include "lists.h"
/**
 * list_len - get the number of elements in a list
 * @h: pointer to the list
 * Return: the number of elemnts
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);

}
