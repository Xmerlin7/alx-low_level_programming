#include "main.h"

/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
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
