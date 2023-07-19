#include "main.h"
/**
*times_table - prints the 9 times table
*Format:0,  0,  0
*Return: returns nothing
*/
void times_table(void)
{
	int f, l, p;

	for (f = 0; f < 10; f++)
	{
		_putchar(48);
		for (m = 1; m < 10; m++)
		{
			p = f * l;
			_putchar(',');
			_putchar(' ');
			if (p <= 9)
				_putchar(p + 48);
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
	}
	return (0);
}
