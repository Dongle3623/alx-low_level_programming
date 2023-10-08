#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory which is set to zero.
 * If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb *size);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb *size);
return (ptr);
}
