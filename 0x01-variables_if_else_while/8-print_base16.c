#include <stdio.h>

/**
 * main - program that print all the numbers of base 16
 *
 * Return:0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'e'; ch++)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
