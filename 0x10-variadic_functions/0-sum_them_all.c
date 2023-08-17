#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all  parameters
*@n: number of parameter
*
*Return: 0 if n is null
* or the sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list app;

	if (!n)
		return (0);
	va_start(app, n);
	while (i--)
		s += va_arg(app, int);
	va_end(app);
	return (s);
}
