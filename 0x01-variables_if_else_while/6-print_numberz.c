#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * return: 0
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
