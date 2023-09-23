#include "main.h"
/**
*rev_str - reverse the order of the char in buff array
*@a : a string as its length as input.
*@n: the length of the string to be reverses
*
*Description:  it reverses the order of characters in the string.
*/
void rev_str(char *a, int n)
{
char tmp;
int i = 0;
int end = n - 1; /*due to '\0'*/

while (i < end)
{
tmp = a[i];
a[i] = a[end];
a[end] = tmp;
i++;
end--;
}
}
