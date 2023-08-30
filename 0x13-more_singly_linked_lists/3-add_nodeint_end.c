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
	listint_t *pointer = *head;

        new = malloc(sizeof(listint_t));
        if (new)
                return (NULL);
	else
		new->n = n;
		new->next = NULL;
	while (pointer->next)
	{
		pointer = pointer->next;
	}
	pointer->next = new;
        return (new);
}

