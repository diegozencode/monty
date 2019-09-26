#include "monty.h"
char *token2 = NULL;
/**
 * my_read - Function that process all the document.
 * @fp: file that will readed.
 */
void my_read(FILE *fp)
{
	char *line = NULL;
	size_t len = 0;
	char *token1 = NULL;

	while (getline(&line, &len, fp) != -1)
	{
		token1 = strtok(line, " \n");
		token2 = strtok(NULL, " \n");
		if (token1 != NULL)
			option_opcode(token1);
		printf("------------\n");
		printf("token1 --> [%s]\n", token1);
		printf("token2 --> [%s]\n", token2);
	}
	free(line);
}

/**
 * option_opcode - select the correspond opcode funtion
 * @token1: opcode
 */
void option_opcode(char *token1)
{
	unsigned int i = 0;
	stack_t *stack = NULL;

	instruction_t list[] = {
		{"push", push},
		{"pall", pall},
		 /* {"pint", pint},
		 * {"pop", pop},
		 * {"swap", swap},
		 * {"add", add},
		 * {"nop", nop},
		 * {"sub", sub},
		 * {"div", div},
		 * {"mul", mul},
		 * {"mod", mod},
		 * {"pchar", pchar},
		 * {"pstr", pstr},
		 * {"rotl", rotl},
		 * {"rotr", rotr},
		 */
		{NULL, NULL}
	};

	while (list[i].opcode != NULL)
	{
		if (strcmp(token1, list[i].opcode) == 0)
			/* printf("Is in list tk1[%s] tk2[%s]", token1, token2); */
			list[i].f(&stack, 1);
		i++;
	}
	pall(&stack, 1);
	stack = NULL;
}
