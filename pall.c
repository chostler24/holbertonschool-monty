#include "monty.h"

void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	while (*stack != NULL)
	{
		printf("%i\n", stack->n);
		stack = stack->next;
	}
}
