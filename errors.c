#include "monty.h"
/**
 * errors - Function that print the error ID
 * @id: ID of the error
 * Return: Nothing.
 */
void errors(int id)
{
	switch (id)
	{
	case 1:
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
}
