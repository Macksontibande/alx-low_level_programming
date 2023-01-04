#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * area pointed to by @s with the constant byte @c
 * @s: a pointer to the memory
 * @c: a charecter to fill the memory
 * @n: integer to use
 * Return: memory
 */
void *_memset(void *s, int c, size_t n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = c;
		n--;
	}

	return (s);
}
