#include <stdio.h>
/**
*main - prints sum of even fibonacci till 4000000
*Return: Always 0
*/
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3 = 0, sum = 0;

	while (n3 <= 4000000)
	{
	n1 = n2;
	n2 = n3;
	n3 = n1 + n2;
	if ((n1 % 2) == 0)
		sum += n1;

	}
	printf("%lu\n", sum);
	return (0);
}
