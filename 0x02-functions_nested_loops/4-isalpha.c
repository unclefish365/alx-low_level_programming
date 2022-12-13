#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: checks if a character is alphabetic
 * @c: the character to be checked
 * Return: 1 if character is a letter, lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
