#include "variadic_functions.h"

/**
*print_numbers - prints numbers followed by
*new line
*@separator: string to be printed between numbers
*@n: numbers of integer
*
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list app;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(app, n);
	while (i--)
		printf("%d%s", va_arg(app, int), 
				i ? (separator ? separator : "") : "\n");
	va_end(app);
}
