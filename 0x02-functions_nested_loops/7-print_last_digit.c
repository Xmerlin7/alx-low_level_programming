#include "main.h"
/**
*print_last_digit -  prints last digit of a number
*@n: number to be inserted
*Return: returns 0
*/
int print_last_digit(int n)
{
int l = n % 10;

_putchar (l + '0');
return (l);
}
