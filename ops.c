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
		/* free_stack(*stack); */
		errors(4, "test");
	}
	printf("before atoi %s\n", token2);
	new->n = atoi(token2);
	printf("after atoi %d\n", atoi(token2));
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
	printf("Hasta aqui todo esta rodo bien!");
}

/**
 * pall - print all elements of the stack
 * @stack: top pointer to stack
 * @line_number: number line
 */
void pall(stack_t **stack, unsigned int line_number)
{
	/* stack_t *tmp; */
	(void)line_number;

	/*tmp = *stack;
	  printf("%d", tmp->n);

	while (tmp !=  NULL)
	{
		tmp = tmp->next;
		printf("%d",tmp->n);
		} */

	if (stack != NULL)
	{
		printf("tiene algo\n");
		printf("%d", (*stack)->n);
	}
	else
	{
		printf("no tiene nada\n");
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
