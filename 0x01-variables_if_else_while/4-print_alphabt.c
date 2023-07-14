#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alpahpet without q and e
 * return: 0
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
	putchar('n');
	return (0);
}
