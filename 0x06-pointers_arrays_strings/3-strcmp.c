nclude "main.h"
/**
* _strcmp - Compares two strings.
* @str1: The first string.
* @str2: The second string.
*
* Return: 1 if the strings are equal, 0 otherwise.
*/
int _strcmp(char *s1, char *s2)
{
int i, ret;

for (i = 0; *(str1 + i) || *(str2 + i); i++)
{
ret = *(str1 + i) - *(str2 + i);
if (ret != 0)
break;
}
return (ret);
}
