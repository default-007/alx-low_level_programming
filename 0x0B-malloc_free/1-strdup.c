#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *string;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[l] != '\0')
		l++;

	string = malloc((l + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		string[i] = str[i];
		i++;
	}

	return (string);
}
