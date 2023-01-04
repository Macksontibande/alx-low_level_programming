#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * area pointed to by @s with the constant byte @c
 * @s: a pointer to the memory
 * @b: a charecter to fill the memory
 * @n: integer to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
