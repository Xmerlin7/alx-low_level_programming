#include "main.h"
/**
 *_strlen - returns the length of a string.
 * @s: string.
 *Return: returns lenght.
 */
int _strlen(char *s)
{
	int ctr, i;

	i = 0;
	for (ctr = 0; s[ctr] != '\0'; ctr++)
		i++;

	return (i);
}
