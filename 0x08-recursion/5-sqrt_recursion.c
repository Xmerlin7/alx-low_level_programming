#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
*
* Return: the square root of n
*/
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * _sqrt - returns the square root of a number
 * @n: squared number
 * @x: helper number
 *
 * Return: the square root of n
 */
int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}
