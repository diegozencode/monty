#include "monty.h"
/**
 * main - Entry point
 * @argc: Number of parameters.
 * @argv: Parameters.
 * Return: EXIT_SUCCESS.
 */
int main(int argc, char **argv)
{
	FILE *fp;

	printf("%i %s\n", argc, argv[1]);

	if (argc != 2)
	{
		errors(1, "asd");
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		errors(2, argv[1]);
	}
	fprintf(fp, "test testing");
	fclose(fp);

	printf("testing %s\n", argv[1]);
	exit(EXIT_SUCCESS);
}
