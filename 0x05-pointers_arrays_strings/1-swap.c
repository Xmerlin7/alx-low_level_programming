#include "main.h"
/**
*swap_int - swaps two integers
*@a: first num
*@b: second num
*Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
