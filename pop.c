#include "monty.h"

/**
 * op_pop - removes the top element of the stack
 * @stack: double pointer to the stack
 * @line_number: current line number
 *
 * Return: void
 */

void op_pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_t *temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
