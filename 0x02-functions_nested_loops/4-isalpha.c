#include "main.h"

/**
 * _isalpha - check if character is a letter, both lowercase or uppercase
 *
 * @c: takes imput fron other functions
 *
 * Return: 1 if c is true else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
		return (1);
	return (0);
}
