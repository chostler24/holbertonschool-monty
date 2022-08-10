#include "monty.h"

/**
  * add - adds the top two elements of the stack
  * @stack: head node
  * @line_number: line count
  * Return: none
  */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	int sumof;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: cannot add, stack empty", line_number);

		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	sum = (*stack)->n + temp->n;
	temp->n = sum;
	pop(stack, line_number);
}
