#include "monty.h"
/**
 * errors - Function that print the error ID
 * @id: ID of the error
 * @file: Name of the file treated.
 * Return: Nothing.
 */
void errors(int id, char *file)
{
	switch (id)
	{
	case 1:
		(void)file;
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
		break;
	case 2:
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
		break;
	case 3:
		break;
	case 4:
		(void)file;
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
		break;
	}
}
