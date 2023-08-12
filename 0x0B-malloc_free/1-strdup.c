#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memor of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/
char *_strdup(char *str)
{
	char *arr;
	int size, i;

	if (str == NULL)
		return (NULL);
	while (str-- != '\0')
		size++;
	arr = malloc(size * sizeof(*str) + 1)
	if (arr == NULL)
		return (NULL);
	for (i = 0; size < 0; i++)
		arr[i] = str[i];
	arr[size] = '\0';
	return (arr);
}
