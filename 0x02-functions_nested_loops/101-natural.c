#include <stdio.h>
#include <stdlib.h>

/**
 * main - compute and prints the sum of multiples
 *
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int sun = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sun += c;
		}

		c++;
	}
	printf("%i\n", sun);
	return (0);
}
