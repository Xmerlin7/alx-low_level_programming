#include "main.h"

/**
 * _isupper - check if c is upper
 *@c: input to be checked
 * Return: 1 if upper, 0 if else
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
