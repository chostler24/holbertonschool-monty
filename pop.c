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
		fprintf(stderr, "L%i: can't pop an empty stack", line_number);

		exit(EXIT_FAILURE);
	}

	temp = *stack;

	*stack = (*stack)->next;

	free(temp);
}
