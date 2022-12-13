#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _islower - checks if character is lowercase
 * @c: character in question
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
