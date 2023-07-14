#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);
		if (n == 57)
			n += 39;
		n++;
	}
	putchar('\n');
	return (0);
}
