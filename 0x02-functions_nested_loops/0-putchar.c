#include "main.h"

/**
 *main - Entry point
 *
 * Description: prints _putchar using putchar
 *
 * Return: Always 0 if success
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(ch[i]);
	_putchar('\n');

	return (0);
}
