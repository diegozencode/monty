#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	ssize_t n = 0;

	printf("%i %s\n", argc, argv[0]);

	if (argc != 2)
	{
		// fputs simply writes the string to the indicated output stream
		fputs("USAGE: monty file\n", stderr);
		// fprintf does formatted output
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	printf(n+"testing %s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
