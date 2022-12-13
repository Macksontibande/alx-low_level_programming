#include <stdio.h>

/**
 * main - Programme to print lowercase followed by a line
 *
 * Return: 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'q' || alp == 'e')
		{

		}
		else
			putchar(alp);
			alp++;
	}
	return (0);
}
