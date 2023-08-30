#include "lists.h"
/**
 *add_nodeint_end - adds node at the end
 *@head: head of the list
 *@n: the number to be added
 *Return: the address of the new number
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cursor = *head;

	new = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;

		cursor->next = new_node;
	}
	else
		*head = new;
	return (new);
}
