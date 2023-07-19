#include "main.h"

/**
 *print_alphabet - using putchar it prints from a to z
 *
 *description: The function uses nested loops to print 10 times
 *Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
int ctr = 0;
int i;
while (ctr++ <= 9)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);

_putchar('\n');
}
}
