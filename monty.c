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

	if (argc != 2)
	{
		errors(1, "asd");
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		errors(2, argv[1]);
	}
	my_read(fp);
	fclose(fp);
	test();

	printf("testing %s\n", argv[1]);
	exit(EXIT_SUCCESS);
}
