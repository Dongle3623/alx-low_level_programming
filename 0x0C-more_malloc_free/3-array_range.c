#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer of the array
 * @max: last integer of the array
 *
 * Return: pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
int *array;
int i;
if (min > max)
return (NULL);
array = malloc(sizeof(int) * ((max - min) + 1));
if (array == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
array[i] = min;
return (array);
}
