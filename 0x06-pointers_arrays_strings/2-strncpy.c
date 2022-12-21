#include "main.h"

/**
 * _strncpy - copies at most an inputted number of
 * bytes from string @src into @dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the max number of bytes to be copied from src
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
