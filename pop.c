#include "monty.h"

/**
  * pop - deletes node from stack/queue
  * @stack: node
  * @line_number: line number
  * Return: none
  */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);

		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;

	if ((*stack)->next != NULL)
		(*stack)->next->prev = NULL;

	free(*stack);

	*stack = temp;
}
