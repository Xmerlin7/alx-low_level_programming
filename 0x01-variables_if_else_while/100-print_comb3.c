#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints a compination of unsimilar 2 numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar(n1 + 48);
			putchar(n2 + 48);
		
		if (n1 == 8 && n2 == 9)
			break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
