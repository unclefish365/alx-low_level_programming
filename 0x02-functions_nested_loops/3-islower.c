#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: checks if a character is lowercase
 * Return: 1 if character is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
