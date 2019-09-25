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

	printf("%i %s\n", argc, argv[0]);

	if (argc != 2)
	{
		errors(1);
	}

	fp = fopen(argv[1], "w+");
	fprintf(fp, "test testing");
	fclose(fp);

	printf("testing %s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
