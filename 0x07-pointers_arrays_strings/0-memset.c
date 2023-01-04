#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by @s with the constant byte @c
 * @s: a pointer to the memory
 * @c: a charecter to fill the memory
 * @n: integer to use
 * Return: memory
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory_bite = s, value = c;

	for (index = 0; index < n; index++)
		memory_bite[index] = value;

	return (memory_bite);
}
