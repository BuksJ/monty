#include "monty.h"

/**
 * op_swap - swaps the top two elements of the stack
 * @head: double pointer to the stack
 * @counter: current line number
 *
 * Return: void
 */

void op_swap(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	int temp = (*head)->n;

	(*head)->n = (*head)->next->n;
	(*head)->next->n = temp;
}
