#include "main.h"

/**
 * _strcat - concatenates string pointed by @src
 * @dest: string that will be appended
 * @src: string to be concate=inated upon
 * Return: pointer @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
