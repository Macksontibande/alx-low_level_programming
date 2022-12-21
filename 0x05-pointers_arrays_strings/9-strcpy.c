#include "main.h"

/**
 * _strcpy - copy string
 * @dest: is destination
 * @src: is copy
 * Return: the copy
 */
char *_strcpy(char *dest, char *src);
{
	int count = 0, i;

	while (*src)
	{
		src++;
		count++;
	}

	for (i = 0; i < count; i++)
		src--;

	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}

	dest[i] = *src;

	return (dest);
}
