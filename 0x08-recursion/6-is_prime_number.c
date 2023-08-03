#include "main.h"
/**
* is_prime_number - returns true if the number is prime
*@n: the number to check
*
*Return: true if the number is prime
*/
int is_prime_number(int n)
{
	int s = n / 2;

	if (n <= 1)
		return (0);
	return (check_prime(n, s));
}

/**
* check_prime - returns the 1 if n is prime
* @n: number to be checked
* @s: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int check_prime(int n, int s)
{
	if (s <= 1)
		return (1);
	else if (n % s == 0)
		return (0);
	return (is_prime(n, s - 1));
}
