#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head)
		return (NULL);
	pop = *head;
	n = pop->n;
	free(pop);
	*head = (*head)->next;
	return (n);
}
