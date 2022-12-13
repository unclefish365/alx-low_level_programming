#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - prints alphabet in lowercase
 * Description: prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
