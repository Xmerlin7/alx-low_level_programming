#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints numbers 0, 1, -9.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
