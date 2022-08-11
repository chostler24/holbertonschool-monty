#include "monty.h"

/**
  * swap - swaps top two elements of stack
  * @stack: head
  * @line_number: line count
  * Return: none
  */

void swap(stack_t **stack, unsigned int line_number)
{
	int *temp = stack->n;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", line_number);

		exit(EXIT_FAILURE);
	}

	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
