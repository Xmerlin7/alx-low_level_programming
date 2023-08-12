#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
* space in memory of the
* string given as a parameter.
* @str: String to be copied
*
* Return: NULL in case of error, pointer to allocated
* space
*/
char *_strdup(char *str) {
	int size;
	char *arr;
	int i;
	
	if (str == NULL)
		return NULL;

	for (size = 0; str[size]; size++);
	arr = malloc(size + 1);
	if (arr == NULL)
		return NULL;

	for (i = 0; i < size; i++)
		arr[i] = str[i];
	arr[size] = '\0';
	return arr;
}
