#include "main.h"
/**
 * _strncpy - function that copy a string into a pointer
 * @dest: the pointer will hae the copy
 * @src: the pointer that will be copied
 * @n: number of bytes to be copied
 *
 * Return: a poiter to the new dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);


}
