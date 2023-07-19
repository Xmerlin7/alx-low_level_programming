#include <stdio.h>
/**
*main - prints first 98 fibonacci numbers
*Return: return 0
*/
int main(void)
{
	int i = 0, j = 1 ,k;
	int l;

	k = i + j;
	for (l = 3; l <= 98; i++)
	{
		printf("%d, ", k);
		i = j;
		j = k;
		k = i + j;
	}
	return (0);
}
		



