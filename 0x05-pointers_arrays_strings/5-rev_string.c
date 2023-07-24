#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: void
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while(i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
