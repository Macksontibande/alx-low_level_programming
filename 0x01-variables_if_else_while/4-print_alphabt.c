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
		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
