#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to be inserted
*Return: NULL if it fails,
*pointer to array if everything is good.
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	int size;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	if (arr == 0)
		return (NULL);
	while (size--)
		arr[size] = c;
	return (arr);
}
