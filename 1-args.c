
#include <stdio.h>

/**
* main - prints the number of arguments
*@argc: number of arguments
*@argv: array of arguments
*Return: the number of arguments
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argc - 1);
	(void)argc;
	return (0);
}
