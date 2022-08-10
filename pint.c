#include "monty.h"

/**
  * pint - prints the value at the top of the stack
  * @stack: head node
  * @line_number: line count
  * Return: none
  */

void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		exit(EXIT_SUCCESS);
	}
	printf("%i\n", (*stack)->n);
}
