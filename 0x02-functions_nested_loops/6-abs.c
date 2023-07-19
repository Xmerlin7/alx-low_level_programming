#include "main.h"
/**
* _abs - prints the absolute of a number
*@r: number inserted
*Return: returns 0
*/
int _abs(int r)
{
	if (r > 0)
		return (r);
	else if (r < 0)
		return (-r);
	else
		return (0);
}
