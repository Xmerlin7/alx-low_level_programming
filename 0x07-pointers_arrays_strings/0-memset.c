/**
 * _memset - fills the first n bytes of memory with b
 *
 * @s: input
 * @b: input
 * @n: input
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
