#include "lists.h"
/**
 *add_nodeint - adds node at the begnning
 *@head: head of the list 
 *@n: the number to be added
 *Return: the address of the new number 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
