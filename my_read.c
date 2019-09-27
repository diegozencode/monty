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
	stack_t *stack = NULL;
	int counter = 0;

	while (getline(&line, &len, fp) != -1)
	{
		counter++;
		token1 = strtok(line, " \n");
		token2 = strtok(NULL, " \n");
		if (token1 != NULL)
			option_opcode(token1, &stack, counter);
	}
	free_stack(stack);
	free(line);
}

/**
 * option_opcode - select the correspond opcode funtion
 * @token1: opcode
 * @stack: Is the head of the list.
 * @counter: Is the counter of the current line.
 */
void option_opcode(char *token1, stack_t **stack, int counter)
{
	unsigned int i = 0;

	instruction_t list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"nop", nop},
		{NULL, NULL}
	};
	while (list[i].opcode != NULL)
	{
		if (strcmp(token1, list[i].opcode) == 0)

			list[i].f(stack, counter);
		i++;
	}
}
