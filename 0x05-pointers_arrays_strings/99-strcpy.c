#include "main.h"

/**
 * _strcpy - copies string
 * @dest: is destiny
 * @src: is the copy
 * Return: the copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
