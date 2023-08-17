#include "variadic_functions.h"
/**
* print_strings - prints strings
*@separator: separator
*@n: number of strings
*
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list app;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(app, n);
	while (i--)
		printf("%s%s",(str =  va_arg(app, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
		va_end(app);

}
