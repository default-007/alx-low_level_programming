#include "main.h"
#include <stdlib>

/**
 * _calloc - a function that allocates
 *           memory for an array using malloc
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory
 *         or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *qwe;
	unsigned int boi;

	if (nmemb == 0 || size == 0)
		return (NULL);
	qwe = malloc(nmemb * size);
	if (qwe == NULL)
		return (NULL);
	for (boi = 0; boi < (nmemb * size); boi++)
		qwe[boi] = 0;
	return (qwe);
}
