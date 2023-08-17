#include "variadic_functions.h"
/**
* print_char - Prints a char.
* @app: A list of arguments pointer
*@separator: the string separator
*/
void print_char(char *separator, va_list app)
{
	printf("%s%c", separator, va_arg(app, int));
}

/**
* print_int - Prints an int.
* @app: A list of arguments pointer
*@separator: the string separator
*/
void print_int(char *separator, va_list app)
{
printf("%s%d", separator, va_arg(app, int));
}

/**
* print_float - Prints a float.
* @app: A list of arguments pointer
*@separator: the string separator
*/
void print_float(char *separator, va_list app)
{
printf("%s%f", separator, va_arg(app, double));
}

/**
* print_string - Prints a string.
* @app: A list of arguments pointer
*@separator: the string separator
*/

void print_string(va_list app)
{
char *str;

str = va_arg(app, char *);

if (str == NULL)
{
printf("(nil)");
return;
}

printf("%s%s", separator, str);
}

/**
*print_all - prints anything
*@format: format of string
*
*Return: nothing
*/
void print_all(const char * const format, ...)
{
va_list app;

int i = 0, j = 0;

char *separator = "";

token_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};

va_start(app, format);

while (format && (*(format + i)))
{
j = 0;

while (j < 4 && (*(format + i) != *(funcs[j].token)))
j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(app);
separator = ", ";
}

i++;

}

printf("\n");

va_end(app);
}

