#include "lists.h"

/**
* print_list - prints all the elements of a list_t
*
* @h:pointer to the list
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h){

	size_t *pointer = h;
	size_t ctr = 0;

	while (pointer != '\0')
	{
		if ((pointer->str) != '\0') 
			printf("[%d] %s\n", pointer->len, pointer->str);
		else
			printf("[0] (nil)\n");

		ctr += 1;
		pointer = pointer->next;
	}
	return (count);
}
