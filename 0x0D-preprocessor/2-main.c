#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the name of the file it was
 *              compiled from, followed by a new line
 *              using FILE macro
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
