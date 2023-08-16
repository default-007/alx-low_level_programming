#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the opcodes
 *              of its own main function.
 *              Usage: ./main number_of_bytes
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always Successful
*/

int main(int argc, char *argv[])
{
	int index, nobytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nobytes = atoi(argv[1]);
	if (nobytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < nobytes; index++)
	{
		printf("%02x", ptr[index] & 0xFF);
		if (index != nobytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
