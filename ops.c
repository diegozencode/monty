#include "monty.h"

/**
 * push - push an element to the stack
 * @stack: top pointer to stack
 * @line_number: number line
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (token2 == NULL)
	{
		free_stack(*stack);
		errors(5, "namefile", line_number);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free_stack(*stack);
		errors(4, "test", line_number);
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
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * pint - prints the value at the top of the stack
 * @stack: top pointer to stack
 * @line_number: number line
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (*stack == NULL)
		errors(3, "1", line_number);

	printf("%d\n", (*stack)->n);
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
