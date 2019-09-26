#include "monty.h"

/**
 * push - push an element to the stack
 * @stack: top pointer to stack
 * @line_number: number line
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free_stack(*stack);
		errors(4, "test");
	}
	new->n = atoi(token2);
	new->prev = NULL;
	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
		*stack = new;
	}
}

/**
 * pall - print all elements of the stack
 * @stack: top pointer to stack
 * @line_number: number line
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;

	while (tmp !=  NULL)
	{
		tmp = tmp->next;
		printf("%d",tmp->n);
	}
}

/**
 * free_stack - free the stack
 * @top: pointer to top of stack
 */
void free_stack(stack_t *top)
{
	stack_t *tmp;

	while (top != NULL)
	{
		tmp = top;
		top = top->next;
		free(tmp);
	}
}
