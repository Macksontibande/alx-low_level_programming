#include <stdio.h>

/**
 * main - Programme that prints lowercase and then uppercase
 *
 * Return: 0
 */
int main(void)
{
	char a;

	char b;

	a = 'a';
	b = 'A';
	while
		(a <= 'z') {
			putchar(a);
			a++;
		}
	while
		(b <= 'Z') {
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
