#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}
		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
