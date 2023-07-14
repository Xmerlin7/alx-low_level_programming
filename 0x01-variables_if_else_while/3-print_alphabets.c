#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase & uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; lch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; lch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
