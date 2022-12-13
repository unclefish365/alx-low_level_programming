#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - computes absolute value of integer
 * Description: computes the absolute value of an integer
 * @n: is the integer to be computed
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
