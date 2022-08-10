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
		fprintf(stderr, "L%i: can't add, stack too short", line_number);

		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	sumof = (*stack)->n + temp->n;
	temp->n = sumof;
}
