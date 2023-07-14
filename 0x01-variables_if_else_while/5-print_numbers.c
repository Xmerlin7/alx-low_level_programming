#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the digit from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
