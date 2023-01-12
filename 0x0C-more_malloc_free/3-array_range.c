#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered
 * from min to max, inclusive
 * @min: the first value of array
 * @max: the last value of array
 *
 * Return: if min > max or function fails - NULL
 * otherwise - a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
