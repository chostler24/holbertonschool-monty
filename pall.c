#include "monty.h"

/**
 * pall - prints entire stack
 * @stack - stack
 * @line_number - line # of argument
 * Return: void
 */

void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
		return;
	temp = *stack;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
	}
}
