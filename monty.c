#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: Number of parameters.
 * @argv: Parameters.
 * Return: EXIT_SUCCESS.
 */
int main(int argc, char **argv)
{
	printf("%i %s\n", argc, argv[0]);

	if (argc != 2)
	{
		errors(1);
	}

	printf("testing %s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
