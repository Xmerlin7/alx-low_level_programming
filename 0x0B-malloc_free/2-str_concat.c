#include "main.h"

/**
 *_strlen - find the lenght of a string
 *@s: the string to be counted
 */
int _strlen(char *s)
{
	int size = 0;
	for (; s[size]; size++)
		;
	return (size);
}
/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/
char *str_concat(char *s1, char *s2)
{
	int size1, size2;
	int i;
	char *s;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
                s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	s = malloc(size1 + size2 + 1);

	for (i = 0 ; i <= (size1 + size2); i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
