#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

	void print_rev(char *s)
	{
		int len = 0, i = 0;

		len = _strlen(s);

		for (i = len - 1; i >= 0; i--)
		putchar(s[i]);

		putchar('\n');
}
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
