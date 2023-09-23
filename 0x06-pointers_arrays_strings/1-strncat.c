#include "main.h"

/**
 *_strncat -  the string pointed to by @src to
 *@dest: String that will be appended
 *@src: String to be concatenated
 *@n: number of bytes being concatenated
 *
 * Return: returns poiner to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	dest[len] = '\0';
	return (dest);
}

