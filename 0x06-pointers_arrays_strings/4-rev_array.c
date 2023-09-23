#include "main.h"
/**
*rev_str - reverse the order of the char in buff array
*@a : a string as its length as input.
*@n: the length of the string to be reverses
*
*Description:  it reverses the order of characters in the string.
*/
void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
