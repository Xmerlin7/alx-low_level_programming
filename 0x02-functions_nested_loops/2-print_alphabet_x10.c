#include "main.h"

/**
 *print_alphabet - using putchar it prints from a to z
 */

void print_alphabet(void)
{
	int i, ctr = 0;

	while (ctr < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	ctr++;
	}
}
