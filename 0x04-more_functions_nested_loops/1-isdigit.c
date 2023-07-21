#include "main.h"

/**
 * _isdigit - check if c is digit from 0 - 9
 *@c: input to be checked
 * Return: 1 if upper, 0 if else
 */
int _isupper(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
