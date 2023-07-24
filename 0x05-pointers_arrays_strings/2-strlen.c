#include "main.h"
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int ctr = 0, i;

	for (int i = 0; *s[i] != '0'; i++)
	{
		i++;
	}
	return (i);
}

