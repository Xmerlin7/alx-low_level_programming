#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * return: 0
 */

int main(void)
{
	char ch = 'a';

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
