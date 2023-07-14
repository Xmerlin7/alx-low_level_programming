#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1) + 48);
			putchar(' ');
			putchar((n2 / 10) + 48);
			putchar((n2) + '0');

			if (n1 == 98 && n2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
