#include "monty.h"
/**
 * my_read - Function that process all the document.
 * @fp: file that will readed.
 */
char *token2 = NULL;

void my_read(FILE *fp)
{
	char *line = NULL;
	size_t len = 0;
	char *token1 = NULL;


	while (getline(&line, &len, fp) != -1)
	{
		token1 = strtok(line, " \n");
		token2 = strtok(NULL, " \n");
		printf("------------\n");
		printf("token1 --> [%s]\n", token1);
		printf("token2 --> [%s]\n", token2);
	}
	free(line);
	token2 = "Daniel";
}
