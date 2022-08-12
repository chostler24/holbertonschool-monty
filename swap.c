#include "monty.h"

/**
  * swap - swaps top two elements of stack
  * @stack: head
  * @line_number: line count
  * Return: none
  */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", line_number);

		exit(EXIT_FAILURE);
	}
	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = temp->prev;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
	temp->prev = *stack;
	temp = temp->next;
	temp->prev = (*stack)->next;
}
