#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet without q & e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'a';

	srand(time(0));
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
