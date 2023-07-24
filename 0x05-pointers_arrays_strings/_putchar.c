#include <unistd.h>
#include "main.h"

/**
 *_putchar -  prints the character c to stdout
 *@c: the char to be printed
 *Return: Always 0 if success
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
