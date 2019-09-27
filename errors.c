#include "monty.h"
/**
 * errors - Function that print the error ID
 * @id: ID of the error
 * @file: Name of the file treated.
 * @counter: line number
 * Return: Nothing.
 */
void errors(int id, char *file, int counter)
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
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
		break;
	case 4:
		(void)file;
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
		break;
	case 5:
		(void)file;
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
		break;
	case 6:
		(void)file;
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
}
