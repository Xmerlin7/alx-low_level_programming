#include "main.h"

/**
 *_strcat -  the string pointed to by @src to
 *@dest: String that will be appended
 *@src: String to be concatenated 
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
