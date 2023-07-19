#include "main.h"
/**_islower - check if a character is a lowercase
*@c: character to be checked
*Return: return 0 or 1 if lower
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
