#include "main.h"

/**
 * strcat - concatenates the string pointed by @src
 * including the terminating null-byte,
 * to the end of the string pointed to by @dest
 * @dest: a pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest
 *
 * Return: a pointer to the destination string @dest
 */
char *strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
