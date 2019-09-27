#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: top pointer to stack
 * @line_number: number line
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		errors(6, "namefile", line_number);
	}
	tmp = (*stack);
	if (tmp->next == NULL)
	{
		free(tmp);
		*stack = NULL;
	}
	else
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}

}
