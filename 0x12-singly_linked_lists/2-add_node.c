#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 *@head: pointer to the head
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dummy;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	dummy = strdup(str);
	if (dummy == NULL)
	{
		fre(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++;)
		;
	new->str = dummy;
	new->len = len;
	new->next = next;
	*head = new;
	return (new);
}
