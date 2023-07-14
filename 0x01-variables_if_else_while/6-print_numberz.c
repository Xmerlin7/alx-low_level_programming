#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 using putchar fun.
 * Return: Always 0
 */
int main(void)
{
	int n;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
